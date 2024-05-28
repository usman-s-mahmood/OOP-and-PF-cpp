#include <iostream>
#include "header.h"
using namespace std;
const char und[] = "Undefined";
Shape::Shape()
{
    color = und;
}
Shape::Shape(const char *color)
{
    this->color = color;
}
void Shape::setVals(const char *color)
{
    this->color = color;
}
void Shape::display()
{
    cout<<"Color of shape is: "<<color<<endl;
}

Circle::Circle()
{
    radius = 0.0;
    Shape::setVals(und);
}
Circle::Circle(const char *color, double radius)
{
    this->radius = radius;
    Shape::setVals(color);
}
void Circle::setVals(const char *color, double radius)
{
    this->radius = radius;
    Shape::setVals(color);
}
void Circle::display()
{
    Shape::display();
    cout<<"Radius of circle: "<<radius<<endl;
}

Rectangle::Rectangle()
{
    length = 0.0;
    width = 0.0;
    Shape::setVals(und);
}
Rectangle::Rectangle(const char *color, double length, double width)
{
    this->length = length;
    this->width = width;
    Shape::setVals(color);
}
void Rectangle::display()
{
    Shape::display();
    cout<<"Atributtes of rectangle: "<<endl
        <<"Width of rectangle is: "<<width<<endl
        <<"Length of rectangle is: "<<length
    <<endl;
}