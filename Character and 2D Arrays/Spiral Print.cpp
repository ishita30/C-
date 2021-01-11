#include<iostream>
using namespace std;
/*First row(left to right)
Last column(top to bottom)
Last row(right to left)
First column(bottom to top)*/
void spiralPrint(int **input, int nRows, int nCols)
{
    int startrow=0,startc=0,rowend=nRows-1,columnend=nCols-1,count=0;
    while(count!=(nRows*nCols))// as there are total nRows*nCols elements, so when all elements are printed we stop.
    {
        for(int j=startc;j<=columnend;j++)
        {
            cout<<input[startrow][j]<<" ";
            count++;
        }
        startrow++;
        for(int i=startrow;i<=rowend;i++)
        {
            cout<<input[i][columnend]<<" ";
            count++;
        }
        columnend--;
        for(int j=columnend;j>=startc;j--)
        {
            cout<<input[rowend][j]<<" ";
            count++;
        }
        rowend--;
        for(int i=rowend;i>=startrow;i--)
        {
            cout<<input[i][startc]<<" ";
            count++;
        }
        startc++;
        
    }
}
int main()
{
    
        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);
        cout << endl;
}