#include<iostream>
using namespace std;
#include<climits>
// to find out which column or row has the largest sum.
void findLargest(int **input, int nRows, int mCols)
{
    int sumC,sumR,sum1=INT_MIN,sum2=INT_MIN,row_index=0,column_index=0;
    for(int j = 0;  j < mCols; j++) {
	    sumC =0;
		for(int i = 0; i < nRows; i++) {
		    sumC = sumC + input[i][j];
            if(sumC>sum1)
            {
                sum1=sumC;
                column_index=j;
            }
        }
	}
    for(int i=0;i<nRows;i++)
    {
        sumR=0;
        for(int j=0;j<mCols;j++)
        {
            sumR=sumR + input[i][j];
            if(sumR > sum2)
            {
                sum2=sumR;
                row_index=i;
            }
        }
    }
    if(sum1>sum2)
    {
        cout<<"column"<<" "<<column_index<<" "<<sum1;
    }
    else if(sum2>=sum1)
    {
        cout<<"row"<<" "<<row_index<<" "<<sum2;
    }
    //Write your code here
}
int main()
{
	
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
}
