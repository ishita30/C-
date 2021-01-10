#include <iostream>
using namespace std;
int duplicateNumber(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) // we started with i+1 as we don't need to check elements as they have already been checked while checking for arr[0] element.
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
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
		cout << duplicateNumber(arr,n) << endl;
	return 0;
}
