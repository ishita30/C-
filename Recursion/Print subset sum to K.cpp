void helper (int input[],int size,int output[],int os, int k)
{
    if (size ==0)
    {
        int i= os-1;
        int sum =0;
        int m=0;
        for(i=os-1;i>=0;i--)
        {
            sum =sum +output[i];
        }
        if (sum ==k)
        {
             for(i=os-1;i>=0;i--)
             {
                 cout<<output[i]<<" ";
             }
            cout<<endl;
        }
    }
    else
    {
        helper(input,size-1,output,os,k);
        output[os]=input[size-1];
         helper(input,size-1,output,os+1,k);
    }   
}
void printSubsetSumToK(int input[], int size, int k) {
   int output[50];
    int os=0;
     helper(input,size,output,os,k);
    
}
