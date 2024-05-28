#include<iostream>
#include "header1.cpp"

using namespace std;

int main()
{
    int x, y; char ch;
    cout<<"Enter the expression to be evaluated(a + b, a - b, a / b, a * b): ";
    cin>>x>>ch>>y;
    // obj.setVals(x, y);
    Calculator obj1(x, y);
    Calculator obj = obj1;
    Calculator *ptr;
    if (ch == '+')
        obj.add();
    else if (ch == '-')
        obj.sub();
    else if (ch == '*')
        obj.mul();
    else if (ch == '/')
        obj.div();
    else
        cout<<"Invalid Operator!"<<endl;
    return 0;
    delete ptr;
}