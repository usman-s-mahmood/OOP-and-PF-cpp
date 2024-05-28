#include<iostream>
#include "header.cpp"
using namespace std;

int main()
{
    char author[] = "Dale Carnegie", title[] = "Stop Worrying Start living", email[] = "dalecarnegie@gmail.com";
    int birthYear = 1888;
    double price = 65.85;
    Book obj(author, email, birthYear, title, price);
    obj.display();
    return 0;
}