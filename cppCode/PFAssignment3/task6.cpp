#include<iostream>

using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;
    cout<<"Enter number of rows for Matrix 1: ";
    cin>>rows1;
    cout<<"Enter number of columns for Matrix 1: ";
    cin>>cols1;
    int matrix1[rows1][cols1];
    cout<<"Enter number of rows for Matrix 2: ";
    cin>>rows2;
    cout<<"Enter number of columns for Matrix 2: ";
    cin>>cols2;
    int matrix2[rows2][cols2], matrixPro[rows1][cols2];
    cout<<"Enter values for matrix1: "<<endl;
    for(int i = 0; i < rows1; i++)
        for(int j = 0; j < cols1; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>matrix1[i][j];
        }
    cout<<"Enter values for matrix2: "<<endl;
    for(int i = 0; i < rows2; i++)
        for(int j = 0; j < cols2; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>matrix2[i][j];
        }
    for (int i = 0; i < rows1; i++) 
        for (int j = 0; j < cols2; j++) 
        {
            matrixPro[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
                matrixPro[i][j] += matrix1[i][k] * matrix2[k][j];   
        }
    cout<<"Multiplication of matrices is: "<<endl;
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
            cout<<matrixPro[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}