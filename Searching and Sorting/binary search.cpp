#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val)
{
    int start=0, end=n-1;
    while(start<=end)
    {
        int mid = (start + end) / 2;
		if(input[mid] == val) 
    {
			return mid;
		}
		else if(val < input[mid]) 
    {
			end = mid - 1;
		}
		else 
     {
			start = mid + 1;
		 }

    }
   return -1;
}

//Recursive

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	return 0;
}
