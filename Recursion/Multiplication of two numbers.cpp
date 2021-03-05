//multiplication of 2 numbers using recursion
#include <iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    if(n==0)
    {
        return 0; // base case
    }
    int ans=(m*(n-1));//recursive call, example 3*2 = 3+3 = 3*1 + 3
    return ans+m;
}
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}


