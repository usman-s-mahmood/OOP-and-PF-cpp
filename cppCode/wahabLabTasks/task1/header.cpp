#include<iostream>
#include "header.h"
using namespace std;

Employee::Employee()
{
    id = 0;
    salary = 0;
    name = nullptr;
}
Employee::Employee(int id, const char *name, double salary)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
}
void Employee::setVals(int id, const char *name, double salary)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
}
void Employee::display()
{
    cout<<"Employee info is: "<<endl
        <<"Name: "<<name<<endl
        <<"Employee ID: "<<id<<endl
        <<"Salary: "<<salary
    <<endl;
}

Department::Department()
{
    manager.setVals(0, nullptr, 0.0);
    name = nullptr;
}
Department::Department(const char *empName, int id, double salary, const char *name)
{
    manager.setVals(id, empName, salary);
    this->name = name;
}
void Department::setVals(const char *empName, int id, double salary, const char *name)
{
    manager.setVals(id, empName, salary);
    this->name = name;
}
void Department::display()
{
    manager.display();
    cout<<"Department name: "<<name<<endl;
}