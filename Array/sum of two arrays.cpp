#include<iostream>
using namespace std;
// we need to add the array numbers like we add normal numbers. 
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
   int i,j,k,num,carry=0;
    i=size1-1;
    j=size2-1;

    if (size1>=size2){
        k=size1;
        while (i>=0&&j>=0){
            num =input1[i]+input2[j]+carry;
            output[k--]=num%10;
            carry =num/10;
            i--;
            j--; 
        }
        while (i>=0){
            num =input1[i]+carry;
            output[k--]=num%10;
            carry =num/10;
            i--; 
        }
        output[0]=carry;


    }
    else {
        k=size2;
        while (i>=0&&j>=0){
            num =input1[i]+input2[j]+carry;
            output[k--]=num%10;
            carry =num/10;
            i--;
            j--; 
        }
        while (j>=0){
            num =input2[j]+carry;
            output[k--]=num%10;
            carry =num/10;
            j--; 
        }
        output[0]=carry ;
    }

}
int main()
{
	   int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

}
