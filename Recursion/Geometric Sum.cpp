#include <iostream>
#include<math.h> //(for power function)
#include<iomanip> //( for setprecision function)
using namespace std;
double geometricSum(int k) {
        if (k==0)
    {
        return 1; // as 1/2^0 = 1 (base case)
    }
    return geometricSum(k-1)+1/pow(2,k);  
}
int main() {
    int k;
    cin >> k;
    //cout <<fixed << setprecision(5); (to find value upto 5 decimal places )
    cout << geometricSum(k) << endl;   
}
