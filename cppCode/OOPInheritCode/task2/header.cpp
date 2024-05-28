#include<iostream>
#include "header.h"
using namespace std;

Base1::Base1()
{
    cout<<"Base 1 consturctor"<<endl;
}
Base1::~Base1()
{
    cout<<"Base 1 Destructor"<<endl;
}

Base2::Base2()
{
    cout<<"Base 2 consturctor"<<endl;
}
Base2::~Base2()
{
    cout<<"Base 2 Destructor"<<endl;
}

Derived::Derived()
{
    cout<<"Derived consturctor"<<endl;
}
Derived::~Derived()
{
    cout<<"Derived Destructor"<<endl;
}