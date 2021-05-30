#include<iostream>
using namespace std;
//smaller disk always placed above larger disk
void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    //(2^n)-1 steps 
  if(n==0)
  {
      return;
  }
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<<source<<" "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,source,destination);

}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}

