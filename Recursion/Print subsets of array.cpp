#include <iostream>
using namespace std;
void print(int input[], int size,int output[],int m){
    if (size==0){
        for (int i=0;i<m;i++){
        cout<< output[i]<<" ";
        
    } cout<<endl;
        return;
    }
       print( input+1, size-1, output, m);

      int  output1[1000];
       for (int i=0;i<m;i++){
           output1[i]= output[i];
       }
      output1[m]=input[0];

     print( input+1, size-1, output1, m+1);
    return;
}

void printSubsetsOfArray(int input[], int size) {
	
    int output[1000];
    int m=0;
    print( input, size, output, m);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}