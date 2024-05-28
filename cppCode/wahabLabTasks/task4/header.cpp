#include<iostream>
#include "header.h"
using namespace std;

Department::Department()
{
    name = nullptr;
}
Department::Department(const char *name)
{
    this->name = name;
}
void Department::setVals(const char *name)
{
    this->name = name;
}
void Department::display()
{
    cout<<"Department name: "<<name<<endl;
}

Student::Student()
{
    department->setVals(nullptr);
    name = nullptr;
    id = 0;
}
Student::Student(const char *depName, const char *name, int id)
{
    department->setVals(depName);
    this->name = name;
    this->id = id;
}
void Student::setVals(const char *depName, const char *name, int id)
{
    department->setVals(depName);
    this->name = name;
    this->id = id;
}
void Student::display()
{
    department->display();
    cout<<"Student info: "<<endl
        <<"Name: "<<name<<endl
        <<"ID: "<<id
    <<endl;
}