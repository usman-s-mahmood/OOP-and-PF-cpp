#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    cout<<"Welcome to online shoping cart!\n1 for admin login\n2 for customer login: ";
    char ch;
    cin>>ch;
    if(ch == '1')
    {
        cout<<"Enter admin login: ";
        char adUser[6];
        cin>>adUser;
        cout<<"Enter admin password: ";
        char adPass[5];
        cin>>adPass;
        if(strcmp(adUser, "Admin") == 0 && strcmp(adPass, "123") == 0)
        {
            cout<<"Welcome to admin login!";
        }
        else
            cout<<"Invalid login creditentials";
    }
    else if(ch == '2')
    {

    }
    else
        cout<<"Invalid option";
    return 0;
}