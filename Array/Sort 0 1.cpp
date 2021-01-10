#include <iostream>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        if(input[i]==1 && input[j]==0)
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
       else if(input[i]==0)
        {
            i++;
        }
        else if(input[j]==1)
        {
            j--;
        }
    }
}
int main()
{
      int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

	return 0;
}
