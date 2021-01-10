#include<iostream>
using namespace std;
// the array given is sorted and then rotated.
int arrayRotateCheck(int *input, int size)
{   
   
    for(int i=0;i<size-1;i++)
    {
        if(input[i]>input[i+1])
        {
           return i+1;
        }
       
    }
    return 0;
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

		cout << arrayRotateCheck(input, size) << endl;
}
