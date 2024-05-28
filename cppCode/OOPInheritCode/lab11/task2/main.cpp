#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char name1[] = "Sam Albert", name2[] = "Tyrell Hashlet", name3[] = "Terry Winston";
    char department[] = "IT and Cybersecurity", project[] = "Building Demolition", task[] = "Do something related to computers";
    Employee obj(name1);
    Engineer obj2(name2, project);
    Clerk obj3(name3, task);
    obj.display();
    obj2.display();
    obj3.display();
    return 0;
}
// this program was compiled on linux so it may need to be compiled again, although code is working