#include <iostream>
using namespace std;
void merge(int x[],int y[],int input[],int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]>y[j])
        {
            input[k]=y[j];
            j++;
            k++;
        }
        else {
            input[k]=x[i];
            i++;
            k++;
            
        }
    }
    while(i<=mid)
    {
        input[k]=x[i];
        i++;      
        k++;
        
    }
    while(j<=e)
    {
        input[k]=y[j];
        j++;
        k++;
        
    }
    
}
void mergesort(int input[],int s,int e)
{
    
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    //creating 2 arrays
    int x[1000],y[1000];
    for(int i=0;i<=mid;i++)
    {
        x[i]=input[i];
    }
    for(int i=mid+1;i<=e;i++)
    {
        y[i]=input[i];
    }
    mergesort(x,s,mid);
    mergesort(y,mid+1,e);
    merge(x,y,input,s,e);

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
    mergesort(input,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    
    
}


