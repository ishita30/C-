#include <iostream>
using namespace std;
#include<cstring>
void replacePi(char input[]) {
    int len=strlen(input);
    if(len==0 || len==1)
    {
        return;
    }
    if(input[0]=='p' && input[1]=='i')
    {
               
     for(int i=len;i>=2;i--)
     {
        input[i+2]= input[i]; //shifting of characters so that space can be created for 3.14
    }
    input[0]='3' ;
    input[1]='.' ;
    input[2]='1' ;  
    input[3]='4' ;
        replacePi(input+4);

    }
    else{
        replacePi(input+1);//recursive call
        return;
    }  
}
int main() {
    char input[10000];
    cin.getline(input, 10000);//cin can't read space,tab,\n
    replacePi(input);
    cout << input << endl;
}


