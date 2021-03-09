#include <iostream>
using namespace std;
#include<cstring>
#include<cmath>
int stringToNumber(char input[]) {
     int len = strlen(input);
    if(len==1)
    {
        return input[len-1] - '0';
    }
    if(len==0)
    {
        return 0;
    }
    int a =stringToNumber(input+1);
    a = a + ((input[0] - '0')*pow(10,len-1));
    return a;
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}




