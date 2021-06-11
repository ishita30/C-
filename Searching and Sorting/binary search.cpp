#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val)
{
    int start=0, end=n-1;
    while(start<=end)
    {
        int mid = (start + end) / 2;
		if(input[mid] == val) 
    {
			return mid;
		}
		else if(val < input[mid]) 
    {
			end = mid - 1;
		}
		else 
     {
			start = mid + 1;
		 }

    }
   return -1;
}


int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	return 0;
}

//Recursive

int binarysearch(int input[],int s,int e,int element)
{
 
    if(s>e)
    {
        return -1;//base case
    }

      int mid= s + (e-s)/2; // to prevent overflow comdition,when both s and e are too large integers.
       
     if(input[mid]==element) 
     {
         return mid; 
     }
       
     else if(input[mid]>element)
     {
         return binarysearch(input,s,mid-1,element);
     }
    
    else
     {
         return binarysearch(input,mid+1,e,element);
     }
   
    
}
int binarySearch(int input[], int size, int element) 
{
     
     return binarysearch(input,0,size-1,element);
    
    // time complexity - O(logn)
   //only for sorted arrays
  
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

