#include <iostream>
#include "header.h"
using namespace std;

char unk[] = "Unknown";
char unm[] = "Not Specified";

Vehicle::Vehicle()
{
    brand = unk;
    model = unm;
}
Vehicle::Vehicle(const char *brand, const char *model)
{
    this->brand = brand;
    this->model = model;
}
void Vehicle::setVals(const char *brand, const char *model)
{
    this->brand = brand;
    this->model = model;
}
void Vehicle::displayInfo()
{
    cout<<"Vehicle Info is: "<<endl
        <<"Brand is: "<<brand<<endl
        <<"Model is: "<<model
    <<endl;
}

Car::Car()
{
    numDoors = 4;
}
Car::Car(const char *brand, const char *model, int numDoors)
{
    Vehicle::setVals(brand, model);
    this->numDoors = numDoors;
}
void Car::setVals(const char *brand, const char *model, int numDoors)
{
    Vehicle::setVals(brand, model);
    this->numDoors = numDoors;
}
void Car::displayInfo()
{
    cout<<"Number of doors are: "<<numDoors<<endl;
}

Motorcycle::Motorcycle()
{
    numWheels = 2;
}
Motorcycle::Motorcycle(const char *brand, const char *model, int numWheels)
{
    Vehicle::setVals(brand, model);
    this->numWheels = numWheels;
}
void Motorcycle::setVals(const char *brand, const char *model, int numWheels)
{
    Vehicle::setVals(brand, model);
    this->numWheels = numWheels;
}
void Motorcycle::displayInfo()
{
    cout<<"Number of Wheels are: "<<numWheels<<endl;
}

Truck::Truck()
{
    cargoCapacity = 0.0;
}
Truck::Truck(const char *brand, const char *model, double cargoCapacity)
{
    Vehicle::setVals(brand, model);
    this->cargoCapacity = cargoCapacity;
}
void Truck::setVals(const char *brand, const char *model, double cargoCapacity)
{
    Vehicle::setVals(brand, model);
    this->cargoCapacity = cargoCapacity;
}
void Truck::displayInfo()
{
    cout<<"Cargo capacity is: "<<cargoCapacity<<endl;
}

RentalAgency::RentalAgency(Vehicle *vehicles)
{
    this->vehicles = vehicles;
}
void RentalAgency::addVehicle(Vehicle *Vehicle)
{
    this->vehicles = vehicles;
}
void RentalAgency::displayRentalInfo()
{
    for(int i = 0; i < 3; i++)
        vehicles[i].displayInfo();
}