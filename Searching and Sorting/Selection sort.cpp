#include <iostream>
using namespace std;
void selectionSort(int input[], int n) {
	for(int i = 0; i < n-1; i++ )// for rounds , total n-1 rounds. 
	{
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) // for finding minimum element for swapping.
	{
		if(input[j] < min) {
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
	}
}
int main() {

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; i++)
	{
		cin >> input[i];
	}
	selectionSort(input, size);
	for(int i=0;i<size;i++)
	{
	    cout<<input[i]<<" ";
	}
	return 0;
}

