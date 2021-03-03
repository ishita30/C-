//to check if given number is present in the array or not.
#include<iostream>
using namespace std;
bool checkNumber(int input[], int size, int x) {
    if(size==0)
    {
        return false;
    }
    else if(input[0]==x)
    {
        return true; //base case
    }
    return checkNumber(input+1 , size-1 ,x); //recursion
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    /* 
    or
    cout<<checkNumber(input,n,x);
    */
    
}


