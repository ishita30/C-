#include <iostream>
using namespace std;
#include <string>
string getstring(int n)
{
    if(n==2)
    {
        return "abc";
    }
    if(n==3)
    {
        return "def";
    }
    if(n==4)
    {
        return "ghi";
    }
    if(n==5)
    {
        return "jkl";
    }
    if(n==6)
    {
        return "mno";
    }
    if(n==7)
    {
        return "pqrs";
    }
    if(n==8)
    {
        return "tuv";
    }
    if(n==9)
    {
        return "wxyz";
    }
    return " ";
}

int keypad(int num, string output[])
{
    if(num==0)
    {
        output[0]=" ";
        return 1;
    }
    int lastdigit=num%10;
    int smallnumber=num/10;
    
    int smalloutputsize= keypad(smallnumber,output);
    string options=getstring(lastdigit);
    int k= smalloutputsize;
    for(int i=0; i < options.length()-1; i++)
    {
        for(int j=0;j<smalloutputsize;j++)
        {
            output[k]= output[j];
            k++;
        }
    }
    k=0; // to run through the output
    for(int i=0;i<options.length();i++)
    {
        for(int j=0;j<smalloutputsize;j++)
        {
            output[k]=output[k] + options[i];
            k++;
        }
    }
    return smalloutputsize * options.length();
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout<<output[i] << endl;
    }
    return 0;
}


