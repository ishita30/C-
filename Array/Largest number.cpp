#include <iostream>
#include<climits>;
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN; //(INT_MIN is used for accessing the most negative no. like negative infinity which is included in class #include<climits>.
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max) 
	{
	  max = arr[i];
	}

    }
    cout<<max<<endl;
    
}

