#include<iostream>
#include "header.h"
using namespace std;

GrandFather::GrandFather()
{
    cout<<"I'm GrandFather class constructor"<<endl;
}
void GrandFather::setValsG(int pvtG, int prtG)
{
    this->pvtG = pvtG;
    this->prtG = prtG;
}
void GrandFather::getValsG()
{
    cout<<"Value of pvtG: "<<pvtG<<endl
        <<"Value of prtG: "<<prtG
    <<endl;
}
GrandFather::~GrandFather()
{
    cout<<"GrandFather Class Destructor Called"<<endl;
}

Parent::Parent()
{
    cout<<"I'm parent class constructor"<<endl;
}
void Parent::setValsP(int pvtP, int prtP)
{
    this->pvtP = pvtP;
    this->prtP = prtP;
}
void Parent::getValsP()
{
    cout<<"Value of pvtP: "<<pvtP<<endl
        <<"Value of prtP: "<<prtP
    <<endl;
}
Parent::~Parent()
{
    cout<<"Parent Class Destructor Called"<<endl;
}

Child::Child()
{
    cout<<"I'm Child class constructor"<<endl;
}
void Child::setValsC(int pvtC, int prtC)
{
    this->pvtC = pvtC;
    this->prtC = prtC;
}
void Child::getValsC()
{
    cout<<"Value of pvtC: "<<pvtC<<endl
        <<"Value of prtC: "<<prtC
    <<endl;
}
Child::~Child()
{
    cout<<"Child Class Destructor Called"<<endl;
}