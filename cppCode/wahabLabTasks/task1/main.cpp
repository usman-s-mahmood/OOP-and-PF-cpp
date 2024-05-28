#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char empName[] = "Asif Ghafoor", depName[] = "Accounts and finance";
    int id = 1;
    double salary = 56813.78;
    Department obj(empName, id, salary, depName);
    obj.display();
    return 0;
}