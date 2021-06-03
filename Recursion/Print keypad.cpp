#include <iostream>
#include<string>
using namespace std;
void keypad(int num,string output,string options[10])
{
   if(num==0)
   {
       cout<<output<<endl; //base case
       return;
   }
    int lastdigit=num%10;
    int smallnum=num/10;
    for(int i=0; i<options[lastdigit].length(); i++)
    {
        
       keypad(smallnum,options[lastdigit][i]+output,options) ;
    }
    return ;
}

void printKeypad(int num){
   string options[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   keypad(num,"",options);//passing empty string as output
}
int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}


