#include <iostream>
using namespace std;
bool is_sorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a+1, size-1); // checking on remaining array.
	return isSmallerSorted; // will return 1 if true and 0 if false.
}
int main()
{
   int n;
   cin>>n;
   int a[1000];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<is_sorted(a,n)<<endl;
   
}
