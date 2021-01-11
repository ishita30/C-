#include<iostream>
using namespace std;
int main()
{
	int a[1000][1000];
	int m, n;
	cin >> m >> n;
	// Taking input
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for(int j = 0;  j < n; j++) {
	    int sum =0;
		for(int i = 0; i < m; i++) {
		    sum = sum + a[i][j];
		    
		}
		cout <<sum << " ";
	}
	/* print array row wise
	cout << "Row wise : " << endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
	}

	cout << "Column wise : " << endl;
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < m; i++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    */
}

