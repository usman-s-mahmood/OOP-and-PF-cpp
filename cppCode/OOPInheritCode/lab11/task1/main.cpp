#include <iostream>
#include "header.cpp"
using namespace std;
int main()
{
    char color[] = "Green";
    double radius = 9.1, length = 6.6, width = 7.8;
    Shape obj1(color);
    Circle obj2(color, radius);
    Rectangle obj3(color, length, width);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}