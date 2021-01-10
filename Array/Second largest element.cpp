#include<iostream>
using namespace std;
#include<climits>
int findSecondLargest(int *input, int n)
{
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        
        if(input[i]>largest)
        {
            secondlargest=largest;
            largest= input[i];
            
        }
        else if(input[i]>secondlargest && input[i]<largest) // if not largest can be 2nd largest so need to check.
        {
           secondlargest= input[i];
        }
    }
    return secondlargest;
}
int main()
{
	    int size;
		cin >> size;
		int *input = new int[size];
        for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
        cout << findSecondLargest(input, size) << endl;

}
