#include<iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter number of rows for both matrices: ";
    cin>>rows;
    cout<<"Enter number of columns for both matrices: ";
    cin>>cols;
    int matrix1[rows][cols], matrix2[rows][cols];
    cout<<"Enter values of matrix 1: "<<endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>matrix1[i][j];
        }
    cout<<"Enter values of matrix 2: "<<endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>matrix2[i][j];
        }
    int sumArr[rows][cols];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sumArr[i][j] = matrix1[i][j] + matrix2[i][j];
    cout<<"Sum of matrices is: "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            cout<<sumArr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
