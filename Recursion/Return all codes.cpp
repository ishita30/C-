#include <iostream>
#include <string.h>
using namespace std;
int getCodes(string input, string output[10000])
{
    
    int size1=0;
    int size2=0;
    if(input.empty())
    {
        output[0]=" ";
        return 1;
    }
    int first=input[0]-'0';
    char ch1=first+'a'-1;
    string s1[10000];
    string s2[10000];
     size1=getCodes(input.substr(1),s1);
    for(int i=0;i<size1;i++)
    {
        s1[i]=ch1+s1[i];
   
    }
    if(input[1]!='\0')
    {
        int second=(first*10)+input[1]-'0';
        if(second>=10&&second<=26)
        {
            char ch2=second+'a'-1;
            size2=getCodes(input.substr(2),s2);
            for(int i=0;i<size2;i++)
            {
                s2[i]=ch2+s2[i];
            }
        }
       
    }
    for(int i=0;i<size1;i++)
    {
        output[i]=s1[i];
    }
    for(int i=0;i<size2;i++)
    {
        output[i+size1]=s2[i];
    }
    return (size1+size2);
}


