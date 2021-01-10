#include <iostream>
using namespace std;
int length(char arr[]) // we don't need to paas length in character array.
{
    int count = 0;
	for(int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main()
{
    char arr[100];
    cin>>arr;
    cout << "Name : " << arr << endl; // space not allowed

	cout << "Length : " << length(arr) << endl;

    
}
