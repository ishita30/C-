#include <iostream>
using namespace std;
void helper(int input[],int size,int output[],int outputsize)
{
    if(size==0)
    {
        for(int i=0;i<=outputsize-1;i++)
        {
            cout<<output[i]<<" "; 
            
        }
        cout<<endl;
        return;
       
    }
    helper(input+1,size-1,output,outputsize);//when input[0] not included
    int newoutput[10000],i;
    for( i=0;i<=outputsize-1;i++)
{
    newoutput[i]=output[i];//copying contents of output array into newarray
   
    
}
 newoutput[i]=input[0];//copying 1st input element at last place of newoutput array
 helper(input+1,size-1,newoutput,outputsize+1); //outputsize will increment by 1 as we added input[0].    
    
    
}
void printSubsetsOfArray(int input[], int size) {
    int output[10000];
    helper(input,size,output,0);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}