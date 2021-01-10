#include<iostream>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
    // push all 0 elements at end, while maintaining the order of non-zero elements same.
     int j=0;
   for(int i=0;i<size;i++)
   {
       
        if(input[i]!=0)
        {
            int temp=input[j]; // if element is not 0 swap it with 0 element.
            input[j]=input[i];
            input[i]=temp;
            j++;
        }

   }
}
int main()
{
	int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

}
