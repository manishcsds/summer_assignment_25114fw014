// inventory management system
#include <iostream>
#include <vector>
using namespace std;
 struct Item {
    int id;
    string name;
    int quantity;
    double price;
};
int main() {
    vector<Item> inventory;
    int choice;
    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n";
        cout << "2. View Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Item item;
                cout << "Enter item ID: ";
                cin >> item.id;
                cout << "Enter item name: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, item.name);
                cout << "Enter item quantity: ";
                cin >> item.quantity;
                cout << "Enter item price: ";
                cin >> item.price;
                inventory.push_back(item);
                break;
            }
            case 2: {
                cout << "\nInventory List:\n";
                for (const auto& item : inventory) {
                    cout << "ID: " << item.id << endl;
                    cout << "Name: " << item.name << endl;
                    cout << "Quantity: " << item.quantity << endl;
                    cout << "Price: $" << item.price << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int id;
                cout << "Enter item ID to search: ";
                cin >> id;
                bool found = false;
                for (const auto& item : inventory) {
                    if (item.id == id) {
                        cout << "ID: " << item.id << endl;
                        cout << "Name: " << item.name << endl;
                        cout << "Quantity: " << item.quantity << endl;
                        cout << "Price: $" << item.price << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
            }
                break;
            case 4: {
                int id;
                cout << "Enter item ID to update: ";
                cin >> id;
                bool found = false;
                for (auto& item : inventory) {
                    if (item.id == id) {
                        cout << "Enter new item name: ";
                        cin.ignore(); // Clear the input buffer
                        getline(cin, item.name);
                        cout << "Enter new item quantity: ";
                        cin >> item.quantity;
                        cout << "Enter new item price: ";
                        cin >> item.price;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
            }
                break;
            case 5: {
                int id;
                cout << "Enter item ID to delete: ";
                cin >> id;
                bool found = false;
                for (auto it = inventory.begin(); it != inventory.end(); ++it) {
                    if (it->id == id) {
                        inventory.erase(it);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
            }
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}