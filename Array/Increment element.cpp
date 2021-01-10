#include <iostream>
using namespace std;

void increment(int a, int b[], int n) {
	a++;
	b[0]++;
}
int main() {

	int a = 10;
	int b[10] = {15, 20, 32, 4, 51};

	increment(a, b, 10);

	cout << "a : " << a << endl; //This shows that changes of function in variable will not be reflected in main as output 10.
	cout << "b[0] : " << b[0] << endl;// but the changes in array will be reflected as it is passing only the address and changes are done in original array itself as output 16. 
	return 0;
}
