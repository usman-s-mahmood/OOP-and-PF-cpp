#include<iostream>
#include "header.h"
using namespace std;

Engine::Engine()
{
    horsePower = 0;
    fuelType = nullptr;
}
Engine::Engine(int horsePower, const char *fuelType)
{
    this->horsePower = horsePower;
    this->fuelType = fuelType;
}
void Engine::setVals(int horsePower, const char *fuelType)
{
    this->horsePower = horsePower;
    this->fuelType = fuelType;
}
void Engine::display()
{
    cout<<"Engine info: "<<endl
        <<"Horse power: "<<horsePower<<endl
        <<"Fuel type: "<<fuelType
    <<endl;
}

Car::Car()
{
    engine.setVals(0, nullptr);
    model = nullptr;
}
Car::Car(const char *fuelType, int horsePower, const char *model)
{
    engine.setVals(horsePower, fuelType);
    this->model = model;
}
void Car::setVals(const char *fuelType, int horsePower, const char *model)
{
    engine.setVals(horsePower, fuelType);
    this->model = model;
}
void Car::display()
{
    engine.display();
    cout<<"Car Model is: "<<model<<endl;
}