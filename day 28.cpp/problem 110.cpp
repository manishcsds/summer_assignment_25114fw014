//bank account management system
#include <iostream>
#include <vector>
using namespace std;

struct Account {
    int accountNumber;
    string accountHolderName;
    double balance;
};  
int main() {
    vector<Account> accounts;
    int choice;
    do {
        cout << "\n--- Bank Account Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. View Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Check Balance\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Account a;
                cout << "Enter account number: ";
                cin >> a.accountNumber;
                cout << "Enter account holder name: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, a.accountHolderName);
                a.balance = 0.0;  
                accounts.push_back(a);
                break;
            }
            case 2: {
                cout << "\nList of Accounts:\n";
                for (const auto& account : accounts) {
                    cout << "Account Number: " << account.accountNumber << endl;
                    cout << "Account Holder Name: " << account.accountHolderName << endl;
                    cout << "Balance: $" << account.balance << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int accountNumber;
                cout << "Enter account number to search: ";
                cin >> accountNumber;
                bool found = false;
                for (const auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        cout << "Account Number: " << account.accountNumber << endl;
                        cout << "Account Holder Name: " << account.accountHolderName << endl;
                        cout << "Balance: $" << account.balance << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 4: {
                int accountNumber;
                double amount;
                cout << "Enter account number to deposit money: ";
                cin >> accountNumber;
                cout << "Enter amount to deposit: $";
                cin >> amount;
                bool found = false; 
                for (auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        account.balance += amount;
                        cout << "Deposit successful. New balance: $" << account.balance << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
            }
                break;
            case 5: {
                int accountNumber;
                double amount;
                cout << "Enter account number to withdraw money: ";
                cin >> accountNumber;
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                bool found = false;
                for (auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        if (account.balance >= amount) {
                            account.balance -= amount;
                            cout << "Withdrawal successful. New balance: $" << account.balance << endl;
                        } else {
                            cout << "Insufficient balance.\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
            }
                break;  
            case 6:
                int accountNumber;
                cout << "Enter account number to check balance: ";  
                cin >> accountNumber;
                bool found = false;
                for (const auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        cout << "Account Number: " << account.accountNumber << endl;
                        cout << "Account Holder Name: " << account.accountHolderName << endl;
                        cout << "Balance: " << account.balance << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            case 7:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
    return 0;
}               