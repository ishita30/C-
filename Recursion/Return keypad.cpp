#include <iostream>
#include<string>
using namespace std;

int keypadhelp(int num,string output[],string options[])
{
    if(num==0)
    {
        output[0]="";//base case
        return 1;
    }
    int lastdigit=num%10;
    int smallnum=num/10;
    string smalloutput[500];
    int smallcount = keypadhelp(smallnum,smalloutput,options);
    string op = options[lastdigit];
    int k=0;
    for(int i=0; i<op.length(); i++)
    {
        for(int j=0;j<smallcount;j++)
        {
            output[k] = smalloutput[j] + op[i];
            k++;
        }
    }
    return k;
}
int keypad(int num,string output[])
{
    string options[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return keypadhelp(num,output,options);
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

