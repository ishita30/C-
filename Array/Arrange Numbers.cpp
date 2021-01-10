#include <iostream>
using namespace std;
//to populate the array using the integer values in the range 1 to N(both inclusive) in the order  1,3,.......4,2
void arrange(int *arr, int n)
{
    int start =0, end=n-1;
    int val=1;
    while(start<end)
    {
        arr[start]=val;
        val++;
        arr[end]=val;
        val++;
        start++;
        end--;
    }
    if(start==end)
    {
        arr[start]=n;
    }
}
int main()
{

		int n;
		cin >> n;
		int arr[1000];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	
	return 0;
}
