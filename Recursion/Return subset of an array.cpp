#include <iostream>
using namespace std;
int subset(int input[], int n, int output[][20])
{
     if(n<=0)//n is length of array
    {
        output[0][0]= 0;
        return 1;
               
    }
    int smallsize=subset(input+1,n-1,output);
    for(int i=0;i<smallsize ;i++)
    {
       output[smallsize+i][0]=output[i][0]+1;//incrementing size by 1
       output[i+smallsize][1]=input[0];//copying first number in coloumn 1
         for(int j=(output[i][0]+1);j>1;j--)
    {
                   
        output[i+smallsize][j]=output[i][j-1]; // for copying rest of the elements after input[0] in coloumn 1.
    }
    }
   
    return 2*smallsize;
}
int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) 
	{ 
		cout << output[i][j] << " "; //printing elements row wise.
    }
    cout << endl;
  }
}
