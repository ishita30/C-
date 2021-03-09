//to add star between consecutive same characters.
#include <iostream>
using namespace std;
#include<cstring>
void pairStar(char input[]) 
{
    int len=strlen(input);
    if(len==0 || len==1)
    {
        return;
    }
    if(input[0]==input[1])
    {
        for(int i=len;i>=1;i--)
        {
            input[i+1]=input[i];
           
        }
        input[1]='*';
    }
    pairStar(input+1);
    return;
    

}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}



