#include<iostream>
#include<fstream>
#include<cstring>
void adminInventory();
void adminFoodAdd();
void adminFoodDetails();
void foodOrder();
void orderTrack();
using namespace std;

int main()
{
    const int max = 100;
    cout<<"************Welcome to Online food odering system************"<<endl;
    cout<<"Select one of the following options"<<endl;
    cout<<"1 for Admin Login"<<endl<<"2 for Customer Login"<<endl;
    char ch;
    cin>>ch;
    if(ch == '1')
    {
        cout<<"Enter Username for login: ";
        char user[5];
        cin>>user;
        cout<<"Enter password: ";
        char password[5];
        cin>>password;
        if (strcmp(user, "Admin") == 0 && strcmp(password, "123") == 0) 
        {
            cout << "Username and password are correct." << endl;
            cout<<"What would you like to do: "<<endl;
            cout<<"Enter 1 for inventory "<<endl<<"Enter 2 for adding food items to the list"<<endl<<"Enter 3 for order/delivery details: ";
            char adminCh;
            cin>>adminCh;
            if(adminCh == '1')
            {
                adminInventory();
            }
            else if(adminCh == '2')
            {
                adminFoodAdd();
            }
            else if(adminCh == '3')
            {
                adminFoodDetails();
            }
            else
                cout<<"Invalid Option";
        } 
        else 
        {
            cout << "Invalid login credentials." << endl;
        }
    }
    else if(ch == '2')
    {
        cout<<"Welcome to Customer Login and Order Page"<<endl;
        cout<<"Enter your desired option"<<endl<<"Enter 1 for food order"<<endl<<"Enter 2 for order tracking: ";
        char userCh;
        cin>>userCh;
        if(userCh == '1')
            foodOrder();
        else if(userCh == '2')
            orderTrack();
        else
            cout<<"Invalid option";
    }
    else
        cout<<"Invalid option!";
    return 0;
}
void adminInventory()
{
    const int MAX_SIZE = 100; // Maximum length for each field
    const int MAX_RECORDS = 10;
    ifstream inputFile("inventory.txt");
    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return;
    }

    char orderNum[MAX_SIZE];
    char user[MAX_SIZE];
    char product[MAX_SIZE];
    char status[MAX_SIZE];
    char contact[MAX_SIZE];
    char address[MAX_SIZE];

    cout << "OrderNum\tUser\tProduct\t\tStatus\t\tContact\t\tAddress" << endl;

    for (int i = 0; i < MAX_RECORDS; i++) {
        inputFile.getline(orderNum, MAX_SIZE, ',');
        inputFile.getline(user, MAX_SIZE, ',');
        inputFile.getline(product, MAX_SIZE, ',');
        inputFile.getline(status, MAX_SIZE, ',');
        inputFile.getline(contact, MAX_SIZE, ',');
        inputFile.getline(address, MAX_SIZE);

        cout << orderNum << "\t\t" << user << "\t" << product << "\t" << status << "\t\t" << contact << "\t" << address << endl;
    }

    inputFile.close();
}
void adminFoodDetails()
{

}
void adminFoodAdd()
{
    const int MAX_ITEMS = 10;
    const int MAX_SIZE = 100;
    char items[MAX_ITEMS][MAX_SIZE];

    ifstream inputFile("items.txt");
    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return;
    }

    cout << "Food Items:" << endl;
    for (int i = 0; i < MAX_ITEMS; i++) {
        inputFile.getline(items[i], MAX_SIZE);
        if (inputFile.eof()) // Break loop if end of file is reached
            break;
        cout << (i + 1) << ". " << items[i] << endl;
    }

    inputFile.close();

    cout << "Do you want to add or remove any items? R for removing items and A for adding items: ";
    char choice;
    cin >> choice;

    if (choice == 'R' || choice == 'r') {
        cout << "Enter the item number(s) you want to remove (separated by space): ";
        int itemNumbers[MAX_ITEMS];
        int numItems = 0;

        while (numItems < MAX_ITEMS && cin >> itemNumbers[numItems]) {
            numItems++;
            if (cin.get() == '\n') // Break loop if newline character is entered
                break;
        }
        ifstream inputFile("items.txt");
        if (!inputFile.is_open()) {
            cout << "Failed to open the file." << endl;
            return;
        }

        ofstream outputFile("temp.txt");
        if (!outputFile.is_open()) {
            cout << "Failed to open the file." << endl;
            return;
        }

        int currentItem = 0;
        int itemCounter = 1;
        char currentItemData[MAX_SIZE];

        while (currentItem < MAX_ITEMS && inputFile.getline(currentItemData, MAX_SIZE)) {
            if (itemCounter != itemNumbers[currentItem]) {
                outputFile << currentItemData << endl;
            } else {
                currentItem++;
            }
            itemCounter++;
        }

        inputFile.close();
        outputFile.close();

        remove("items.txt");
        rename("temp.txt", "items.txt");

        cout << "Selected item(s) removed successfully." << endl;
    } else {
        cout << "No item removed." << endl;
    }
}
void foodOrder()
{
    
}
void orderTrack()
{

}
