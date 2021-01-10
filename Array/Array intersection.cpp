#include <iostream>
using namespace std;
#include<climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if (input1[i]==input2[j])
            {
               
                cout<<input1[i]<<" ";
                input2[j]=INT_MIN;//made the no. = -infinity so that same no. can't be used again.
                break; // break so as to come out of inner for loop so that same no. can't be repeated again.
            }
        }
    }
}
int main()
{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);

	return 0;
}
