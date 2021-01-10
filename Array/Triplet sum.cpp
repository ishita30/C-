#include <iostream>
using namespace std;
int tripletSum(int *input, int size, int x)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int z=j+1;z<size;z++)
            {
                if(input[i]+input[j]+input[z]==x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
        int size,x;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

	   cout << tripletSum(input, size, x) << endl;

	return 0;
}
