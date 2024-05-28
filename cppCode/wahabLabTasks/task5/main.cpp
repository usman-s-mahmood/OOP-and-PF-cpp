#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char fuelType[] = "Petrol", model[] = "Toyota";
    int horsePower = 100;
    Car obj(fuelType, horsePower, model);
    obj.display();
    return 0;
}