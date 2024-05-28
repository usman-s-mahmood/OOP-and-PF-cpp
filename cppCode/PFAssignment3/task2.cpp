#include<iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter number of rows for matrix to be transposed: ";
    cin>>rows;
    cout<<"Enter number of columns for matrix to be transposed: ";
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter values for matrix of dimension: "<<rows<<" x "<<cols<<": "<<endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>matrix[i][j];
        }
    int trows = cols, tcols = rows, tMatrix[trows][tcols];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            tMatrix[j][i] = matrix[i][j];
    cout<<"Original Matrix: "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Transpose of Matrix: "<<endl;
    for(int i = 0; i < trows; i++)
    {
        for(int j = 0; j < tcols; j++)
            cout<<tMatrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}