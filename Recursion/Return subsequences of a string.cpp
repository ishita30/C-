#include <iostream>
using namespace std;

int subs(string input, string output[]) {
	if (input.empty()) {
		output[0] = ""; // as it will have only empty string 
		return 1;
	}

	string smallString = input.substr(1); // as this will give substring apart from 1
	int smallOutputSize = subs(smallString, output);
	for (int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i]; //adding character 1 to the substring
	}
	return 2 * smallOutputSize; 
}

int main() {
	string input;
	cin >> input;
	string* output = new string[1000];
	int count = subs(input, output);// counting the number of substrings
	for (int i = 0; i < count; i++) {
		cout << output[i] << endl;
	}
}

