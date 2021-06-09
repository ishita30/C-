#include<iostream>
using namespace std;
int partition(int input[],int s,int e)
{
    int pivot=input[s];// taking 1st element as the pivot
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(input[i]<=pivot)
        {
            count++; //finding the number of smaller than pivot elements to find the index of partition.
        }
    }
    int pi = count + s;
    
    int temp=input[s];
    input[s]=input[pi];//swapping 1st element with the partition index element
    input[pi]=temp;
    
    int i=s;
    int j=e;
 
    while(i<=pi && j>=pi)
    {
        while(input[i]<=pivot)
        {
            i++;
        }
        while(input[j]>pivot)
        {
            j--;
        }
        if(i<pi && j>pi)
        {
            int temp=input[i];
            input[i]=input[j];  //swppping if input[i] greater and input[j] smaller than pivot
            input[j]=temp;
            i++;
            j--;
        }
    }
    return pi;
    
}

void quicksort(int input[],int s,int e)
{
    
    if(s>=e)
    {
        return;
    }
    int pi=partition(input,s,e); // calling function partition and getting index of partition
    
   
    quicksort(input,s,pi-1);
    quicksort(input,pi+1,e);
}

void quickSort(int input[], int size)
{
    
  quicksort(input,0,size-1);

}
int main()
{
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    quicksort(input,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    
    
}