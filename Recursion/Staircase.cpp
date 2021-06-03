#include <iostream>
#include<string.h>
using namespace std;
int staircase(int n){
    if(n==0 ||n==1)
    {
        return 1;
    }
    
    if(n<0)
    {
        return 0;
    }
    int x=staircase(n-1); //all ways with step 1
    int y=staircase(n-2); // all ways with step 2
    int z=staircase(n-3); // all ways with step 3
    
    return x+y+z;
    
    
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}


