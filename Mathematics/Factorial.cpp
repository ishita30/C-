#include<iostream>
using namespace std;
//ITERATIVE
int factorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
       fact= fact * i;
    }
    return fact;
}
//RECURSIVE
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
//Time complexity- O(n)
Space complexity -O(1)
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}