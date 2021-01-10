#include <iostream>
using namespace std;
/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.*/
int findUnique(int *arr, int n)
{
    for(int i=0;i<n; i++)
    {
       int j;
       for( j=0;j<n;j++)
       {
           if(i!=j && arr[i]==arr[j])
           {
               break;
           }
       }
       if (j==n){
            return arr[i];
        }

    }
}

int main()
{

		int n;
		cin >> n;
		int arr[1000];
		for(int i=0; i<n; i++)
		{
		    cin>>arr[i];
		}
		cout << findUnique(arr, n) << endl;
	
	return 0;
}
