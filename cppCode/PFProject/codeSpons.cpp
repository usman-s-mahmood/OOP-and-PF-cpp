#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void inventory();
void orders();

int main()
{
    cout << "Welcome to online shopping cart" << endl;
    cout << "1 for admin login" << endl;
    cout << "2 for customer login: ";

    char ch;
    cin >> ch;

    if (ch == '1')
    {
        cout << "Enter admin login: ";
        char adUser[6];
        cin >> adUser;
        cout << "Enter admin password: ";
        char adPass[4];
        cin >> adPass;

        if (strcmp(adUser, "Admin") == 0 && strcmp(adPass, "123") == 0)
        {
            cout << "1 for inventory" << endl;
            cout << "2 for order list: ";
            char ch;
            cin >> ch;

            if (ch == '1')
            {
                inventory();
            }
            else if (ch == '2')
            {
                orders();
            }
            else
            {
                cout << "Invalid option!" << endl;
                return 1;
            }
        }
    }
    else if (ch == '2')
    {
        cout << "These are the items that we have:" << endl;

        ifstream fileObj("products.txt", ios::in);
        int quant[20];
        string name[20];
        int price[20];

        for (int i = 0; fileObj >> quant[i] >> name[i] >> price[i]; i++)
        {
            cout << "Code Number " << i << " for item with description: ";
            cout << "Item Name: " << name[i] << ", Price: " << price[i] << ", Quantity: " << quant[i] << endl;
        }

        cout << "Enter the number of items you would like to buy: ";
        int size;
        cin >> size;

        int items[size];
        cout << "Enter the code number for the items you want to buy: " << endl;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter code for index " << i << " of cart: ";
            cin >> items[i];
        }

        cout << "Items that you have selected are: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Product: " << name[items[i]] << "\tPrice: " << price[items[i]] << endl;
        }

        cout << "Enter the quantity for each product: " << endl;
        int finQuant[size];

        for (int i = 0; i < size; i++)
        {
            cout << "Enter quantity for item " << name[items[i]] << " of price unit " << price[items[i]] << ": ";
            cin >> finQuant[i];

            if (finQuant[i] > quant[items[i]])
            {
                cout << "Invalid Option" << endl;
                return 1;
            }

            if (finQuant[i] < 0)
            {
                cout << "Negative numbers are not allowed" << endl;
                return 1;
            }
        }

        cout << "Items that you have selected with quantity are: " << endl;
        int bill = 0;

        for (int i = 0; i < size; i++)
        {
            cout << "Product: " << name[items[i]] << " Quantity: " << finQuant[i] << "\tPrice: " << price[items[i]] * finQuant[i] << endl;
            bill += price[items[i]] * finQuant[i];
        }

        cout << "Your bill is: " << bill << endl;
        cout << "Do you want to proceed (Y/N): ";

        char prc;
        cin >> prc;

        if (prc == 'y' || prc == 'Y')
        {
            cout << "Enter your name: ";
            string cName;
            cin >> cName;

            cin.ignore();
            cout << "Enter your phone number: ";
            string num;
            getline(cin, num);

            cout << "Enter your address: ";
            string addr;
            getline(cin, addr);

            cout << "Thank you for shopping! Your products shall be delivered to your specified address." << endl;

            fstream fileObj("products.txt", ios::out);

            for (int i = 0; i < size; i++)
            {
                quant[items[i]] -= finQuant[i];
                fileObj << quant[items[i]] << " " << name[items[i]] << " " << price[items[i]] << endl;
            }

            fileObj.close();
        }
        else if (prc == 'n' || prc == 'N')
        {
            cout << "Your order has been cancelled!" << endl;
            return 1;
        }
        else
        {
            cout << "Invalid option!" << endl;
            return 1;
        }

        fileObj.close();
    }
    else
    {
        cout << "Invalid option!" << endl;
    }

    return 0;
}

void inventory()
{
    cout << "Quantity and items separated by space" << endl;

    ifstream inputFile("products.txt");

    if (!inputFile.is_open())
    {
        cout << "Failed to open the file." << endl;
        return;
    }

    string line;

    while (getline(inputFile, line))
    {
        istringstream iss(line);
        int quantity;
        string name;
        int price;

        if (iss >> quantity >> name >> price)
        {
            cout << "Quantity: " << quantity << ", Name: " << name << ", Price: " << price << endl;
        }
    }

    inputFile.close();
}

void orders()
{
    cout << "Order list with username, item, quantity, PhoneNumber, Address, bill" << endl;

    fstream fileObj("orders.txt", ios::in);
    string readOrders;

    while (fileObj >> readOrders)
    {
        cout << readOrders << " ";
    }

    fileObj.close();
}
