//Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
#include <iostream>
using namespace std;
#include<unordered_map>

int pairSum(int *arr, int n) {
    
    //     int count=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<i;j++)
    //         if(arr[i]+arr[j]==0)
    //         {
    //            count++; 
    //         }
    //     }
    // return count;
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(0-arr[i])!=mp.end())
        {
          
            count=count+mp[-arr[i]];
           
            
        }
         mp[arr[i]]++ ; //incrementing frequency of elements of map
        
       
    }
    return count;
    
        
}
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}