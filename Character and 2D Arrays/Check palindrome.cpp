#include <iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char str[])
{
    int i=0,count=0,j;
    for(int p=0; str[p]!='\0';p++)// to find length of string.
    {
        count++;
    }
    j=count-1;
    while(i<j)
    {
        if(str[i]!=str[j])//comparing from first and last.
        {
            return false;
           
        }
         i++;
         j--;
        
    }
    return true;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
    
    /* or if(checkPalindrome(str))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    */
    
}
