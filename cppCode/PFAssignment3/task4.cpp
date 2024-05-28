#include<iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter rows for 2D array: ";
    cin>>rows;
    cout<<"Enter columns for 2D array: ";
    cin>>cols;
    int arr[rows][cols];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            cout<<"Enter value for index "<<i<<" "<<j<<": ";
            cin>>arr[i][j];
        }
    int maxVal = 0, maxRow, maxCol;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            if(arr[i][j] > maxVal)
            {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
    cout<<"Original array is: "<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Max value in array on position "<<maxRow<<" "<<maxCol<<" is: "<<maxVal;
    return 0;
}