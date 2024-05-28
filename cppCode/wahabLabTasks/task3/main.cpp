#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char brand[] = "Intel", model[] = "Dell";
    float speed = 3.5;
    Computer obj(brand, speed, model);
    obj.display();
    return 0;
}