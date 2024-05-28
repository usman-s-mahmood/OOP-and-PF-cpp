#include<iostream>
using namespace std;
int dPoint(int **ptr);
int main()
{
    int var = 20;
    int *ptr = &var; //int *dummy = &ptr;
    cout<<"Value of var with single pointer: "<<var<<endl;
    *ptr = 60;

    cout<<"Value of var with single pointer: "<<var<<endl;
    int **ptrD = &ptr;
    dPoint(ptrD);
    cout<<"Value of var with single pointer: "<<var;
}
int dPoint(int **ptr)
{
    int **ptr = new int(42);
    return 0;
}