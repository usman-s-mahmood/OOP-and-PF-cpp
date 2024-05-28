#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
void adminFun();
void customerFun();

int main()
{
    cout<<"Welcome to online shopping system: \n1 for admin login\n2 for customer login: ";
    int ch;
    cin>>ch;
    if(ch == 1)
        adminFun();
    else if(ch == 2)
        customerFun();
    else
        cout<<"Invalid option!";
    return 0;
}
void adminFun()
{

}
void customerFun()
{
    cout<<"Currently we have these items: "<<endl;
    fstream fileObj("products.txt", ios::in);
    char pName[15]; int pQuant[15], price[15], i = 0;
    while(fileObj>>pQuant[i]>>pName>>price[i])
    {
        cout<<"Item code: "<<i<<" Quantity: "<<pQuant[i]<<" Name: "<<pName<<" "<<" Price: "<<price[i]<<endl;
        i++;
    }
    cout<<"Enter the total number of items (cart size) that you want to purchase: ";
    int cartSize;
    cin>>cartSize;
    int cart[cartSize];
    for(int i = 0; i < 0; i++)
    {
        cout<<"Enter item for cart index "<<i<<": ";
        cin>>cart[i];
    }
    cout<<"Items that you have selected are: "<<endl;
    while(fileObj>>pQuant[i]>>pName>>price[i])
    {
        for(int i = 0; i < cartSize; i++)
        {
            if(cart[i] == pQuant[i])
            {
                cout<<"Product name: "<<pName<<" Price: "<<price<<endl;
                break;
            }
        }
    }
}