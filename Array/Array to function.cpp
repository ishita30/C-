#include <iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cout<<"Function:"<<sizeof(arr)<<endl; This will give 8 output
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    printarray(arr,n);
    //cout<<"Main:"<<sizeof(arr)<<endl; This will give 400 as output (4*100)
    // it is necessary to paas size of array with function.
   
}
