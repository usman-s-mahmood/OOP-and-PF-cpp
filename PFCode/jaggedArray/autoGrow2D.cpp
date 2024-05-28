#include<iostream>

using namespace std;

void autoGrow2D(int **arr, int *newCols, int newRows, int value, int rows, int *cols);

int main()
{
    int rows = 4, **arr = new int*[rows], cols[rows] = {2, 1, 4, 3}, value = 10;
    for(int i = 0; i < rows; i++)
        arr[i] = new int[cols[i]];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols[i]; j++)
        {
            arr[i][j] = value;
            value += 10;
        }
    cout<<"Values in jagged array are: "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols[i]; j++)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }
    int newRows = 5, newCols[newRows] = {3, 2, 5, 4, 5};
    autoGrow2D(arr, newCols, newRows, value, rows, cols);
    return 0;
}

void autoGrow2D(int **arr, int *newCols, int newRows, int value, int rows, int *cols)
{
    int **temp = new int*[newRows];
    for(int i = 0; i < newRows; i++)
        temp[i] = new int[newCols[i]];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols[i]; j++)
            temp[i][j] = arr[i][j];
    for(int i = rows; i < newRows; i++)
        for(int j = cols[i]; j < newCols[i]; j++)
        {
            value+=10;
            temp[i][j] = value;
        }
    cout<<"Values of new array are: "<<endl;
    for(int i = 0; i < newRows; i++)
    {
        for(int j = 0; j < newCols[i]; j++)
            cout<<temp[i][j]<<' ';
        cout<<endl;
    }
    for(int i = 0; i < newRows; i++)
        delete[] temp[i];
    delete[] temp;
    int i = 0;
    for(i; i < rows; i++)
        delete[] arr[i];
    delete[] arr; 
}
