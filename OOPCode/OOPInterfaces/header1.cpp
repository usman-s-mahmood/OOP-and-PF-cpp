#include<iostream>
#include "header1.h"
using namespace std;
void Complex::getVals()
{
    cout<<"Value of Real part is: "<<real<<"\nValue of imaginary part is: "<<imaginary<<" i\n";
}
void Complex::setVals(int a_real, int b_imaginary)
{
    real = a_real;
    imaginary = b_imaginary;
}
void add(Complex o1, Complex o2)
{
    cout<<"Sum is: "<<o1.real+o2.real<<" + "<<o1.imaginary+o2.imaginary<<"i\n";
}
void sub(Complex o1, Complex o2)
{
    cout<<"Subtraction is: "<<o1.real-o2.real<<" - "<<o1.imaginary-o2.imaginary<<"i\n";
}