#include <iostream>
using namespace std;
int sumOfDigits(int n) 
{
    if(n<10)
    {
        return n; // as 1 digit number will have same answer 
    }
    
    int x= n%10; // to find last digit
    int smallans= sumOfDigits(n/10); //recursive call
    return smallans + x;
    

}
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}



