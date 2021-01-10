#include <iostream>
using namespace std;
void trimSpaces(char input[]) 
{
    int j=0;
    for(int i=0;input[i]!='0';i++)
    {
        if(input[i]!=' ') // not taking new array just rewriting in the original array itself.
        {
            input[j]=input[i];
            j++;
        }
    }
    input[j]='0'; // after trimming spaces putting null at the end.
}
int main() {
	char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;

}
