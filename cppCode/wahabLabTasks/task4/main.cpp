#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char depName[] = "FOITCS", name[] = "Abdul Wahab";
    int id = 1038;
    Student obj(depName, name, id);
    obj.display();
    return 0;
} 