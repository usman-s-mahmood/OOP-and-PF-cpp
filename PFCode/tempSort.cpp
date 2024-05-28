#include<iostream>

using namespace std;
void tempSort(int *arr, int size);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    tempSort(arr, 5);
    return 0;
}
void tempSort(int *arr, int size)
{
    cout<<"Value of array before sorting: ";
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    int *ptr = new int[size];
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
    arr[1] = ptr[4];
    arr[4] = ptr[1];
    cout<<endl<<"Value of array after sorting: ";
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    delete[] ptr;
}