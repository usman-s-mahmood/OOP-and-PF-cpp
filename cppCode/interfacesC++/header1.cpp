#include<iostream>
#include "header1.h"

using namespace std;

void Calculator::setVals(int x, int y)
{
    num1 = x;
    num2 = y;
}
void Calculator::getVals()
{
    cout<<"Value of num1: "<<num1<<"\nValue of num2: "<<num2<<endl;
}
void Calculator::add()
{
    cout<<"Addition of "<<num1<<" and "<<num2<<" is: "<<num1+num2<<endl;
}
void Calculator::sub()
{
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is: "<<num1-num2<<endl;
}
void Calculator::mul()
{
    cout<<"multiplication of "<<num1<<" and "<<num2<<" is: "<<num1*num2<<endl;
}
void Calculator::div()
{
    cout<<"Division of "<<num1<<" and "<<num2<<" is: "<<num1/num2<<endl;
}