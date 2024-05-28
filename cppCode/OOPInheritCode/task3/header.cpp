#include<iostream>
#include "header.h"
using namespace std;

A::A()
{
    cout<<"Constructor of A class"<<endl;
}
void A::setA(int aVar)
{
    this->aVar = aVar;
}
void A::getA()
{
    cout<<"Value of aVar is: "<<aVar<<endl;
}
A::~A()
{
    cout<<"Destructor for A class"<<endl;
}

B::B()
{
    cout<<"Constructor of B class"<<endl;
}
void B::setB(int bVar)
{
    this->bVar = bVar;
}
void B::getB()
{
    cout<<"Value of bVar is: "<<bVar<<endl;
}
B::~B()
{
    cout<<"Destructor for B class"<<endl;
}

C::C()
{
    cout<<"Constructor of C class"<<endl;
}
void C::setC(int cVar)
{
    this->cVar = cVar;
}
void C::getC()
{
    cout<<"Value of cVar is: "<<cVar<<endl;
}
C::~C()
{
    cout<<"Destructor for C class"<<endl;
}

D::D()
{
    cout<<"Constructor of D class"<<endl;
}
void D::setD(int dVar)
{
    this->dVar = dVar;
}
void D::getD()
{
    cout<<"Value of dVar is: "<<dVar<<endl;
}
D::~D()
{
    cout<<"Destructor for D class"<<endl;
}

E::E()
{
    cout<<"Constructor of E class"<<endl;
}
void E::setE(int eVar)
{
    this->eVar = eVar;
}
void E::getE()
{
    cout<<"Value of eVar is: "<<eVar<<endl;
}
E::~E()
{
    cout<<"Destructor for E class"<<endl;
}