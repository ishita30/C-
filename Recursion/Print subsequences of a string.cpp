#include <iostream>
using namespace std;

void print_subs(string input, string output) {
	if (input.length() == 0) {
		cout << output << endl; //base case
		return;
	}

	print_subs(input.substr(1), output); //first call
	print_subs(input.substr(1), output + input[0]); //second call
}

int main() {
	string input;
	cin >> input;
	string output = ""; // passing empty string as output
	print_subs(input, output);
}
