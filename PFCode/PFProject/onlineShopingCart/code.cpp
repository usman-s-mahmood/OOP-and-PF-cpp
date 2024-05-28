#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
void inventory();
void itemFun();
int main()
{
    int items[10] = {20};
    cout<<"Welcome to online shoping cart!"<<endl<<"1 for Admin Login\n2 for customer login: ";
    char ch1;
    cin>>ch1;
    if(ch1 == '1')
    {
        cout<<"Enter username for Admin login: ";
        char adUser[5];
        cin>>adUser;
        cout<<"Enter password for Admin login: ";
        char adPass[5];
        cin>>adPass;
        if(strcmp(adUser, "Admin") == 0 && strcmp(adPass, "123") == 0)
        {
            cout<<"Select from the following options: \n1 for inventory\n2 for adding items to the store: ";
            char ch;
            cin>>ch;
            if(ch == '1')
            {
                inventory();
            }
            else if(ch == '2')
            {
                itemFun();
            }
            else
                cout<<"Invalid Option!";
        }
        else
            cout<<"Invalid login creditentials";
    }
    else if(ch1 == '2')
    {
        cout<<"Select from the following items: "<<endl;
        fstream fileObj()
    }
    else
        cout<<"Invalid option!";
    return 0;
}
void inventory()
{
    cout<<"list of inventory items is given below: "<<endl;
    cout<<"Order list is given below: "<<endl;
    string name, item, quant, phone, address; char dump;
    fstream fileObj("inventory.txt", ios::in);
    while (fileObj >> name >> dump >> item >> dump >> quant >> dump >> phone >> dump >> address)
        cout << name << " " << item << ' ' << quant << ' ' << phone << " " << address << endl;
}
void itemFun()
{
    cout<<"Existing Items are: "<<endl;
    fstream fileObj("items.txt", ios::in);
    string item;
    while(fileObj.eof() == 0)
    {
        fileObj>>item;
        cout<<item<<" ";
    }
    cout<<endl<<"Do you want to add more items (Y/N): ";
    char ch;
    cin>>ch;
    if(ch == 'y' || ch == 'Y')
    {
        cout<<"Enter the number of products you want to enter: ";
        int proNum;
        cin>>proNum;
        cout<<"Enter the name of product that you want to enter: "<<endl;
        string product[proNum];
        for(int i = 0; i < proNum; i++)
        {
            cout<<"Enter product number "<<i+1<<" without spaces(use - instead): ";
            cin>>product[i];
        }
        fstream fileObj2("items.txt", ios::app);
        for(int i = 0; i < proNum; i++)
            fileObj2<<product[i]<<endl;
        cout<<"Products added successfully!"<<endl;
        fileObj2.close();
    }
    fileObj.close();
}