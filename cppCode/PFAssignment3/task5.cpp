#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size][size];
    cout<<"Enter values of array: "<<endl;
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
        {
            cout<<"Enter value of index "<<i<<j<<": ";
            cin>>arr[i][j];
        }
    cout<<"Original array: "<<endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;        
    }
    cout<<"Array after spiral order traversal: "<<endl;
    int tRow = 0 bRow = size - 1, lCol = 0, rCol = size - 1;
    while (tRow <= bottomRow && leftColumn <= rightColumn) {
        for (int j = leftColumn; j <= rightColumn; j++) {
            cout << matrix[tRow][j] << " ";
        }
        tRow++;
        for (int i = tRow; i <= bottomRow; i++) {
            cout << matrix[i][rightColumn] << " ";
        }
        rightColumn--;
        if (tRow <= bottomRow) {
            for (int j = rightColumn; j >= leftColumn; j--) {
                cout << matrix[bottomRow][j] << " ";
            }
            bottomRow--;
        }
        if (leftColumn <= rightColumn) {
            for (int i = bottomRow; i >= tRow; i--) {
                cout << matrix[i][leftColumn] << " ";
            }
            leftColumn++;
        }
    return 0;
} // not ready yet!