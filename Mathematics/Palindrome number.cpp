#include <iostream>
using namespace std;
bool palindrome(int n)
{
 // FINDING REVERSE
   int rev=0;
   int temp=n;// so that value of n is stored for comparing with reverse at end.

 while(temp!=0)
 {
   int a=temp%10;
   rev= (rev * 10 )+ a;
   temp=temp/10;   
 }
 if(n==rev)
 {
     return true;
 }
 return false;

}
int main()
{
    int n;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}
