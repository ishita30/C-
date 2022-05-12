#include <iostream>
using namespace std;
//Iterative
int countDigit(long n)
{
int count=0;
while(n!=0)
{
  n=n/10;
  count++;
}

return count;
}

//RECURSIVE-
int countDigit(long n)
{
if(n==0)
{
return 0;
}
return 1 + countDigit(n/10);
}

//LOGARITHMIC SOLUTION
int countDigit(long n)
{
return floor(log 10(n)+1);
}

int main()
{
   int n;
   cin>>n;
   cout<<countDigit(n);
   
}
