#include<iostream>
#include<cmath>

using namespace std;
bool prime(int num);
int main()
{
    int rows, cols;
    cout<<"Enter number of rows for 2D array: ";
    cin>>rows;
    cout<<"Enter number of columns for 2D array: ";
    cin>>cols;
    if(rows != cols)
        cout<<"Diagonal sum is only possible if rows = columns, but "<<rows<<" != "<<cols;
    else
    {
        int arr[rows][cols];
        int sum = 0;
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
            {
                cout<<"Enter values for index "<<i<<" "<<j<<": ";
                cin>>arr[i][j];
            }
        for(int i = 0; i < rows; i++)
            if(!prime(arr[i][i]))
                sum = sum + arr[i][i];
        cout<<"Sum of diagonals by ignoring prime numbers is: "<<sum;
    }
    return 0;
}
bool prime(int num)
{
    bool pTest = true;
    if(num == 0 || num == 1)
        pTest = false;
    for(int i = 2; i <= num/2; ++i)
        if(num % i == 0)
        {
            pTest = false;
            break;
        }
    return pTest;
}
/*
1 2 3
4 5 6 
7 8 9
*/