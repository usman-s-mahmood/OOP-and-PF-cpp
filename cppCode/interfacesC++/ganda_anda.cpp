#include<iostream>

using namespace std;

int main()
{
    cout<<"Whatsapp data, youtube search history, contacts info sending to server for validation at ip: 192.70.23.01 --> [press any key to continue]"<<endl;
    char ch;
    cin>>ch;
    cout<<"Enter pin: ";
    int pin;
    cin>>pin;
    if (pin == 270803)
        cout<<"Data breach complete, system hacked (pack info at localhost port 80)"<<endl;
    else
        cout<<"Invalid pin"<<endl;
    return 0;
}