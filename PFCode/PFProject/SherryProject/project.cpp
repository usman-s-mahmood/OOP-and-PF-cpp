#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int MAX_CONTACTS = 100;

struct Contact {
    char name[50];
    char phone[20];
};

int numContacts = 0;
Contact contacts[MAX_CONTACTS];

void addContact() {
    if (numContacts >= MAX_CONTACTS) {
        cout << "Phonebook is full." << endl;
        return;
    }

    cout << "Enter name: ";
    cin.getline(contacts[numContacts].name, 50);

    cout << "Enter phone number: ";
    cin.getline(contacts[numContacts].phone, 20);

    numContacts++;
}

void searchContact() {
    char name[50];
    cout << "Enter name to search: ";
    cin.getline(name, 50);

    for (int i = 0; i < numContacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            cout << "Name: " << contacts[i].name << endl;
            cout << "Phone: " << contacts[i].phone << endl;
            return;
        }
    }

    cout << "Contact not found." << endl;
}

void modifyContact() {
    char name[50];
    cout << "Enter name to modify: ";
    cin.getline(name, 50);

    for (int i = 0; i < numContacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            cout << "Enter new name: ";
            cin.getline(contacts[i].name, 50);

            cout << "Enter new phone number: ";
            cin.getline(contacts[i].phone, 20);

            cout << "Contact modified." << endl;
            return;
        }
    }

    cout << "Contact not found." << endl;
}

void deleteContact() {
    char name[50];
    cout << "Enter name to delete: ";
    cin.getline(name, 50);

    for (int i = 0; i < numContacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            for (int j = i; j < numContacts - 1; j++) {
                strcpy(contacts[j].name, contacts[j + 1].name);
                strcpy(contacts[j].phone, contacts[j + 1].phone);
            }

            numContacts--;
            cout << "Contact deleted." << endl;
            return;
        }
    }

    cout << "Contact not found." << endl;
}

void savePhonebook() {
    ofstream file("phonebook.txt");

    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    file << numContacts << endl;

    for (int i = 0; i < numContacts; i++) {
        file << contacts[i].name << endl;
        file << contacts[i].phone << endl;
    }

    file.close();
}

void loadPhonebook() {
    ifstream file("phonebook.txt");

    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    file >> numContacts;
    file.ignore();

    for (int i = 0; i < numContacts; i++) {
        file.getline(contacts[i].name, 50);
        file.getline(contacts[i].phone, 20);
    }

    file.close();
}

void printMenu() {
    cout << "Phonebook Application" << endl;
    cout << "---------------------" << endl;
    cout << "1. Add contact" << endl;
    cout << "2. Search contact" << endl;
    cout << "3. Modify contact" << endl;
    cout << "4. Delete contact" << endl;
    cout << "5. Save phonebook" << endl;
    cout << "6. Load phonebook" << endl;
    cout << "7. Exit" << endl;
}

int main() {
    int choice;

    while (true) {
        printMenu();

        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                searchContact();
                break;
            case 3:
                modifyContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                savePhonebook();
                break;
            case 6:
                loadPhonebook();
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}