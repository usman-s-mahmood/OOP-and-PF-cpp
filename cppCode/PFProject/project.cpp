#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cstring>

using namespace std;
void inventory();
void orders();
void orderTrack();
void adminOrderTrack();
int main()
{
    cout<<"Welcome to online shoping cart\n1 for admin login\n2 for customer login: ";
    char ch;
    cin>>ch;
    if(ch == '1')
    {
        cout<<"Enter admin login: ";
        char adUser[6];
        cin>>adUser;
        cout<<"Enter admin password: ";
        char adPass[4];
        cin>>adPass;
        if(strcmp(adUser, "Admin") == 0 && strcmp(adPass, "123") == 0)
        {
            cout<<"1 for inventory\n2 for order list\n3 for changing order status: ";
            char ch;
            cin>>ch;
            if(ch == '1')
            {
                inventory();
            }
            else if(ch == '2')
            {
                orders();
            }
            else if(ch == '3')
                adminOrderTrack();
            else
                cout<<"Invalid option!";
        }
    }
    else if(ch == '2')
    {
        cout<<"1 for item purchasing\n2 for order tracking: ";
        char ch;
        cin>>ch;
        if(ch == '1')
        {
            cout<<"these are the items that we have"<<endl;
            fstream fileObj("products.txt", ios::in);
            int quant[20];
            string name[20];
            int price[20];
            for(int i = 0; fileObj >> quant[i] >> name[i] >> price[i]; i++)
                cout<<"Code Number"<<i<<" for item with description: "<<" Item Name: "<<name[i]<<" price: "<<price[i]<<" Quantity: "<<quant[i]<<endl;
            cout<<"Enter the TOTAL number of items you would like to buy: ";
            int size;
            cin>>size;
            int items[size];
            cout<<"Enter code number for the items you want to buy: "<<endl;
            for(int i = 0; i < size; i++)
            {
                cout<<"Enter code for index "<<i<<" of your cart: ";
                cin>>items[i];
            }
            cout<<"Items that you have selected are: "<<endl;
            for(int i = 0; i < size; i++)
                cout<<"Product: "<<name[items[i]]<<"\tprice  "<<price[items[i]]<<endl;
            cout<<"Enter quantity for each product: "<<endl;
            int finQuant[size];
            for(int i = 0; i < size; i++)
            {
                cout<<"Enter quantity for item "<<name[items[i]]<<" of price unit "<<price[items[i]]<<": ";
                cin>>finQuant[i];
                if(finQuant[i] > quant[i])
                {
                    cout<<"Invalid Option";
                    return 1;
                    break;
                }
                if(finQuant[i] < 0)
                {
                    cout<<"Negative numbers are not allowed";
                    return 1;
                    break;
                }
            }
            cout<<"Items that you have selected with quantity are: "<<endl;
            int bill = 0;
            for(int i = 0; i < size; i++)
            {
                cout<<"Product: "<<name[items[i]]<<" quantity "<<finQuant[i]<<"\tprice  "<<price[items[i]] * finQuant[i]<<endl;
                bill += price[items[i]] * finQuant[i];
            }
            cout<<"Your bill is: "<<bill<<endl<<"Do you want to proceed (Y/N): ";
            char prc;
            cin>>prc;
            if(prc == 'y' || prc == 'Y')
            {
                cout<<"Enter your name without spaces(use - instead): ";
                string cName;
                cin>>cName;
                cout<<"Enter your phone number without spaces(use - instead): ";
                string num;
                cin>>num;
                cout<<"Enter your address without spaces(use - instead): ";
                string addr;
                cin>>addr;
                cout<<"Thank you for shopping! your products shall be delivered at your specified address.";
                fstream fileObj("products.txt", ios::out);
                for(int i = 0; i < size; i++)
                    quant[items[i]] = quant[items[i]] - finQuant[i];
                for(int i = 0; i < 20; i++)
                    fileObj<<quant[i]<<" "<<name[i]<<" "<<price[i]<<endl;
                fileObj.close();
                fstream fileOrd("orders.txt", ios::app);
                fileOrd<<"PhoneNum:"<<num<<" Name:"<<cName<<" Address:"<<addr;
                for(int i = 0; i < size; i++)
                    fileOrd<<" Product:"<<name[items[i]]<<" quantity:"<<finQuant[i]<<" price:"<<price[items[i]] * finQuant[i];
                fileOrd<<" Bill:"<<bill<<" Status:Pending"<<endl;
                fileOrd.close();
            }
            else if(prc == 'n' || prc == 'N')
            {
                cout<<"your order has been cancelled!";
                return 1;
            }
            else
            {
                cout<<"Invalid option!";
                return 1;
            }
            fileObj.close();
        }
        else if(ch == '2')
            orderTrack();
        else
            cout<<"Invalid option!";
    }   
    else
        cout<<"Invalid option!";
    return 0;
}
void inventory()
{
    cout<<"these are the items that we have"<<endl;
    fstream fileObj("products.txt", ios::in);
    int quant[20];
    string name[20];
    int price[20];
    for(int i = 0; fileObj >> quant[i] >> name[i] >> price[i]; i++)
        cout<<"Code Number"<<i<<" for item with description: "<<" Item Name: "<<name[i]<<" price: "<<price[i]<<" Quantity: "<<quant[i]<<endl;
    fileObj.close();
}
    
void orders()
{
    cout<<"Order list with \nusername, item, quantity, PhoneNumber, Address, bill"<<endl;
    fstream fileObj("orders.txt", ios::in);
    string readOrders;
    while(fileObj>>readOrders)
        cout<<readOrders<<" ";
    fileObj.close();
}
void orderTrack()
{
    string phoneNumber;
    cout << "Enter phone number: ";
    cin >> phoneNumber;
    ifstream inputFile("orders.txt");
    if (!inputFile) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    string line;
    bool found = false;
    while (getline(inputFile, line)) 
    {
        if (line.find("PhoneNum:" + phoneNumber) != string::npos) 
        {
            found = true;
            cout << "Order Details:\n";
            cout << line << endl;
            while (getline(inputFile, line) && !line.empty()) 
                cout << line << endl;
            break;
        }
    }
    inputFile.close();
    if (!found)
        cout << "No data found for the given phone number." << endl;
}

void adminOrderTrack() {
    ifstream inputFile("orders.txt");
    if (!inputFile) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    string line;
    int entryCount = 0;
    while (getline(inputFile, line)) 
    {
        entryCount++;
        cout << "Entry " << entryCount << ":\n";
        cout << line << endl;
        while (getline(inputFile, line) && !line.empty())
            cout << line << endl;
        cout << endl;
    }
    inputFile.close();
    if (entryCount == 0) 
    {
        cout << "No entries found in the file." << endl;
        return;
    }
    cout << "Enter the entry number to change its status (0 to exit): ";
    int selectedEntry;
    cin >> selectedEntry;
    if (selectedEntry == 0)
        return;
    inputFile.open("orders.txt");
    ofstream outputFile("orders_temp.txt");
    int currentEntry = 0;
    bool modified = false;
    while (getline(inputFile, line)) 
    {
        currentEntry++;
        if (currentEntry == selectedEntry) 
        {
            string status;
            cout << "Enter new status for entry " << selectedEntry << ": ";
            cin.ignore();  
            getline(cin, status);
            line += " Status:" + status;
            modified = true;
        }
        outputFile << line << endl;
    }
    inputFile.close();
    outputFile.close();
    if (modified) 
    {
        remove("orders.txt");
        rename("orders_temp.txt", "orders.txt");
        cout << "Status updated successfully." << endl;
    } 
    else 
    {
        remove("orders_temp.txt");
        cout << "No changes were made to the status." << endl;
    }
}