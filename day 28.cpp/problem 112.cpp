//contact management system
#include <iostream> 
#include <vector>
using namespace std;

struct Contact {
    int id;
    string name;
    string email;
    string phone;
};
int main() {
    vector<Contact> contacts;
    int choice;
    do {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Contact c;
                cout << "Enter contact ID: ";
                cin >> c.id;
                cout << "Enter contact name: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, c.name);
                cout << "Enter contact email: ";
                getline(cin, c.email);
                cout << "Enter contact phone: ";
                getline(cin, c.phone);
                contacts.push_back(c);
                break;
            }
            case 2: {
                cout << "\nList of Contacts:\n";
                for (const auto& contact : contacts) {
                    cout << "ID: " << contact.id << endl;
                    cout << "Name: " << contact.name << endl;
                    cout << "Email: " << contact.email << endl;
                    cout << "Phone: " << contact.phone << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int id;
                cout << "Enter contact ID to search: ";
                cin >> id;
                bool found = false;
                for (const auto& contact : contacts) {
                    if (contact.id == id) {
                        cout << "ID: " << contact.id << endl;
                        cout << "Name: " << contact.name << endl;
                        cout << "Email: " << contact.email << endl;
                        cout << "Phone: " << contact.phone << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Contact not found.\n";
                }
            }
                break;  
            case 4: {
                int id;
                cout << "Enter contact ID to update: ";
                cin >> id;
                bool found = false;
                for (auto& contact : contacts) {    
                    
                    if (contact.id == id) {
                        cout << "Enter new name: ";
                        cin.ignore(); // Clear the input buffer
                        getline(cin, contact.name);
                        cout << "Enter new email: ";
                        getline(cin, contact.email);
                        cout << "Enter new phone: ";
                        getline(cin, contact.phone);
                        cout << "Contact updated successfully.\n";
                        found = true;
                        break;
                    }
                }   
                if (!found) {
                    cout << "Contact not found.\n";
                }
                break;
            }
            case 5: {
                int id;
                cout << "Enter contact ID to delete: ";
                cin >> id;
                bool found = false;
                for (auto it=contacts.begin(); it!=contacts.end(); ++it) {
                    if (it->id == id) {
                        contacts.erase(it);
                        cout << "Contact deleted successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Contact not found.\n";
                }
                break;
            }   
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }   
    }

    while (choice != 6);
    return 0;
}