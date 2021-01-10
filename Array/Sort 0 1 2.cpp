#include<iostream>
using namespace std;
void sort012(int *arr, int n)
{
   int i=0,next0=0,next2=n-1;
   while(i<=next2)
   {
       if(arr[i]==0)
        {
            int temp=arr[i];
            arr[i]=arr[next0];
            arr[next0]=temp;
            next0++;
            i++;
        }
        else if(arr[i]==2)
        {
            int temp=arr[i];
            arr[i]=arr[next2];
            arr[next2]=temp;
            next2--; // on swapping with 2 no need to do i++ as we don't know which number was there in place of 2.
        }
       else
       {
           i++;
       }
    }
}
int main()
{
	    int size;
	    cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
}
