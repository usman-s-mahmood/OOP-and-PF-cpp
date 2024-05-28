#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    Child obj;
    // obj.setValsG(1, 2);
    obj.setValsP(3, 4);
    obj.setValsC(5, 6);
    // obj.getValsG();
    obj.getValsP();
    obj.getValsC();
    return 0;
}