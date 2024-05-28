#include <iostream>

#include "header.cpp"

using namespace std;

int main()
{
    char brand1[] = "Maybach", model1[] = "S650";
    Vehicle obj1(brand1, model1);
    obj1.displayInfo();
    Car obj2(brand1, model1, 4);
    obj2.displayInfo();
    char brand2[] = "Yamaha", model2[] = "Tenere 700";
    Vehicle obj3(brand2, model2);
    obj3.displayInfo();
    Motorcycle obj4(brand2, model2, 2);
    obj4.displayInfo();
    char brand3[] = "Yamaha", model3[] = "Tenere 700";
    Vehicle obj5(brand3, model3);
    obj5.displayInfo();

    return 0;
}