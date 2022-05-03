//PRINT A NAME N TIMES.
#include <iostream>
using namespace std;
 
void printName(int i,int n,string name)
{
    if(i>n)
    {
        return;
    }
    cout<<name<<endl;
  
    printName(i+1,n,name);
}

int main()
{
    string name;
    cin>>name;
    int n;
    cin>>n;
    printName(1,n,name);
}
