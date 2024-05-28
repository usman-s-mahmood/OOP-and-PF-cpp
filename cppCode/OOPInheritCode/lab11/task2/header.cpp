#include <iostream>
#include "header.h"
using namespace std;
char unk[] = "Unknown";
char und[] = "Undefined";
char npr[] = "No Project";
char ntk[] = "No Task";
Employee::Employee()
{
    name = unk;
}
Employee::Employee(const char *name)
{
    this->name = name;
}
void Employee::setVals(const char *name)
{
    this->name = name;
}
void Employee::display()
{
    cout<<"Name of employee: "<<name<<endl;
}

Manager::Manager()
{
    department = und;
    Employee::setVals(unk);
}
Manager::Manager(const char *name, const char *department)
{
    Employee::setVals(name);
    this->department = department;
}
void Manager::setVals(const char *name, const char *department)
{
    Employee::setVals(name);
    this->department = department;
}
void Manager::display()
{
    Employee::display();
    cout<<"Department is: "<<department<<endl;
}

Engineer::Engineer()
{
    project = npr;
    Employee::setVals(unk);
}
Engineer::Engineer(const char *name, const char *project)
{
    Employee::setVals(name);
    this->project = project;
}
void Engineer::setVals(const char *name, const char *project)
{
    Employee::setVals(name);
    this->project = project;
}
void Engineer::display()
{
    Employee::display();
    cout<<"Project is: "<<project<<endl;
}

Clerk::Clerk()
{
    Employee::setVals(und);
    task = ntk;
}
Clerk::Clerk(const char *name, const char *task)
{
    Employee::setVals(name);
    this->task = task;
}
void Clerk::setVals(const char *name, const char *task)
{
    Employee::setVals(name);
    this->task = task;
}
void Clerk::display()
{
    Employee::display();
    cout<<"Task of employee is: "<<task<<endl;
}