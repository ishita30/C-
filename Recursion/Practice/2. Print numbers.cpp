//PRINT NUMBERS FROM 1 to n.
#include <iostream>
using namespace std;
 
void printNumber(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    printNumber(i+1,n);
}

int main()
{
   
    int n;
    cin>>n;
    printNumber(1,n);
}

//PRINT NUMBERS FROM n to 1.
#include <iostream>
using namespace std;
 
void printNumber(int i,int n)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<endl;
    printNumber(i-1,n);
}

int main()
{
   
    int n;
    cin>>n;
    printNumber(n,n);
}
