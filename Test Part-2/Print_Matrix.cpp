#include <iostream>
using namespace std;

void Print_Matrix(int** arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int k=i;k<row;k++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    
    int row,col;
    cin>> row>> col;

    int **arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i] = new int[col];
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    Print_Matrix(arr,row,col);

    return 0;
}
