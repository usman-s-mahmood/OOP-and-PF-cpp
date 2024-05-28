#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
void saveCont();
void viewCont();
void searchCont();
void modifyCont();
void deleteCont();
int main()
{
    cout<<"Welcome to Phonebook application!"<<endl<<"1. To save a contact"<<endl<<"2. for viewing contacts"<<endl<<"3. for searching contacts"<<endl<<"4. to modify contact"<<endl<<"5. to delete a contact: ";
    int ch;
    cin>>ch;
    if(ch == 1)
        saveCont();
    else if(ch == 2)
        viewCont();
    else if(ch == 3)
        searchCont();
    else if(ch == 4)
        modifyCont();
    else if(ch == 5)
        deleteCont();
    else
        cout<<"Invalid option!";
    return 0;
}
void saveCont()
{
    cout<<"Enter phone number without spaces (use - instead): ";
    char num[15];
    cin>>num;
    cout<<"Enter contact Name without spaces (use - instead): ";
    char name[15];
    cin>>name;    
    cout<<"Enter contact details without spaces (use - instead): ";
    char detail[150];
    cin>>detail;
    cout<<"Proceed to save the contact(Y/N): ";
    char ch;
    cin>>ch;
    if(ch == 'y' || ch == 'Y')
    {
        fstream fileCont("contacts.txt", ios::app);
        fileCont<<name<<" "<<num<<" "<<detail<<endl;
        cout<<"Contact saved successfully!";
        fileCont.close();
    }
    else if(ch == 'n' || ch == 'N')
        cout<<"contact discarded!";
    else
        cout<<"Invalid option!";
}
void viewCont()
{
    cout<<"All contacts are: "<<endl;
    fstream fileCont("contacts.txt", ios::in);
    char cName[15], cNum[15], cDetails[150];
    while(fileCont>>cName>>cNum>>cDetails)
        cout<<cName<<" "<<cNum<<" "<<cDetails<<endl;
    fileCont.close();
}
void searchCont()
{
    cout<<"Enter the name of contact that you want to see: ";
    char name[15];
    cin>>name;
    fstream fileCont("contacts.txt", ios::in);
    char cName[15], cNum[15], cDetail[150];
    while(fileCont>>cName>>cNum>>cDetail)
        if(strcmp(cName, name) == 0)
            cout<<"Contact found!"<<endl<<"Name: "<<cName<<" Phone: "<<cNum<<" cDetail: "<<cDetail<<endl;
    fileCont.close();
}
void modifyCont()
{
    cout<<"Enter the name of contact that you want to see: ";
    char nName[15];
    cin>>nName;
    fstream fileCont("contacts.txt", ios::in);
    char cName[15], cNum[15], cDetail[150];
    while(fileCont>>cName>>cNum>>cDetail)
        if(strcmp(cName, nName) == 0)
        {
            cout<<"Contact found!"<<endl<<"Name: "<<cName<<" Phone: "<<cNum<<" cDetail: "<<cDetail<<endl;
            break;
        }
    cout<<"Which attribute do you want to modify, 1 Name, 2 Phone, 3 Details: ";
    int ch;char name[15], phone[15], details[150];
    cin>>ch;
    if(ch == 1)
    {
        cout<<"Enter new name for contact: ";
        cin>>cName;
        fstream fileObj("temp.txt", ios::app);
        while(fileCont>>name>>phone>>details)
        {
            if(strcmp(cName, nName) == 0)
                continue;
            else
                fileObj<<name<<" "<<phone<<" "<<details;
        }
        fileCont<<cName<<" "<<cNum<<" "<<cDetail;
        fileObj.close();
        char delFile[] = "contacts.txt", tempFile[] = "temp.txt";
        remove(delFile);
        rename(tempFile,delFile);

    }
    else if(ch == 2)
    {

    }
    else if(ch == 3)
    {

    }
    fileCont.close();
}
void deleteCont()
{

}