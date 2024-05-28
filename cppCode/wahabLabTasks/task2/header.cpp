#include<iostream>
#include "header.h"
using namespace std;

Author::Author()
{
    name = nullptr;
    email = nullptr;
    birthYear = 0;
}
Author::Author(const char *name, const char *email, int birthYear)
{
    this->name = name;
    this->email = email;
    this->birthYear = birthYear;
}
void Author::setVals(const char *name, const char *email, int birthYear)
{
    this->name = name;
    this->email = email;
    this->birthYear = birthYear;
}
void Author::display()
{
    cout<<"Author Info is: "<<endl
        <<"Name: "<<name<<endl
        <<"Email: "<<email<<endl
        <<"Birth year: "<<birthYear
    <<endl;
}

Book::Book()
{
    author.setVals(nullptr, nullptr, 0);
    title = nullptr;
    price = 0.0;
}
Book::Book(const char *name, const char *email, int birthYear, const char *title,  double price)
{
    author.setVals(name, email, birthYear);
    this->title = title;
    this->price = price;
}
void Book::setVals(const char *name, const char *email, int birthYear, const char *title, double price)
{
    author.setVals(name, email, birthYear);
    this->title = title;
    this->price = price;
}
void Book::display()
{
    author.display();
    cout<<"Book Details: "<<endl
        <<"Title: "<<title<<endl
        <<"Price: "<<price
    <<endl;
}