#include<iostream>
using namespace std;

int toh(int n){
   if(n==0){
    return 0;
   }
   return toh(n-1) + 1 + toh(n-1);
}

int main(){
  int n;
  cout<<"Enter number of discs"<<endl;
  cin>>n;
  cout<<"Number of steps required"<<endl;
  cout<<toh(n)<<endl;

  return 0;
}

