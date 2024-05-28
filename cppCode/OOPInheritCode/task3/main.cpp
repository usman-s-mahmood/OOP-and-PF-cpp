#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    E obj;
    obj.setA(1);
    obj.setB(2);
    obj.setC(3);
    obj.setD(4);
    obj.setE(5);
    obj.getA();
    obj.getB();
    obj.getC();
    obj.getD();
    obj.getE();
    return 0;
}