#include<iostream>
#include "header.h"
using namespace std;

Processor::Processor()
{
    brand = nullptr;
    speed = 0.0;
}
Processor::Processor(const char *brand, double speed)
{
    this->brand = brand;
    this->speed = speed;
}
void Processor::setVals(const char *brand, double speed)
{
    this->brand = brand;
    this->speed = speed;
}
void Processor::display()
{
    cout<<"Processor info: "<<endl
        <<"Brand: "<<brand<<endl
        <<"Speed: "<<speed
    <<endl;
}

Computer::Computer()
{
    processor.setVals(nullptr, 0.0);
    model = nullptr;
}
Computer::Computer(const char *brand, double speed, const char *model)
{
    processor.setVals(brand, speed);
    this->model = model;
}
void Computer::setVals(const char *brand, double speed, const char *model)
{
    processor.setVals(brand, speed);
    this->model = model;
}
void Computer::display()
{
    processor.display();
    cout<<"Model is: "<<model<<endl;
}