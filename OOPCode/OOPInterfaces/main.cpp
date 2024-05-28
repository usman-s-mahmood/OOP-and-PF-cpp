#include<iostream>
#include "header1.cpp"

using namespace std;

int main()
{
    Complex obj1(5, 7), obj2=obj1;
    obj1.getVals();
    obj2.getVals();
    add(obj1, obj2);
    sub(obj1, obj2);
    return 0;
}