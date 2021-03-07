#include <iostream>
using namespace std;
#include<cstring>
bool helper (char input[],int start,int end ){
    if (start>=end){
        return true ;  //if string is 0 or 1 in length then it will be a palindrome
    }
    if (input[start]!=input[end])
    {
        return false ; //if start and end do not match, it will not be a palindrome
       
    }
    else 
    {
         return helper (input,start+1,end-1); //recursive call
        
    }
    
}
bool checkPalindrome(char input[]) {
   
    int len= strlen(input);
    helper(input,0,len-1);
}
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


