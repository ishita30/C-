// there is no swapping of elements only shifting.
#include<iostream>
using namespace std;
void insertionSort(int *input, int size) {
	for(int i = 1; i < size; i++) {
		int current = input[i];
		int j;
		for(j = i - 1; j >= 0; j--) {
			if(current < input[j]) {
				input[j+1] = input[j]; // shifting of elements.
			}
			else {
				break;
			}
		}
		input[j+1] = current;
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

	return 0;
}
