#include<iostream>
using namespace std;
void rotate(int *input, int d, int n) 
{ 
    for (int j = 0; j < d; j++) // d is the number by which array needs to be rotated.
    {
        int temp = input[0], i; 
    for (i = 0; i < n - 1; i++) // 1 by 1 rotation till d times.
        input[i] = input[i + 1]; 
  
    input[i] = temp; 
    }
} 
int main()
{
	int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

}
