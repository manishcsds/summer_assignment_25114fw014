//employee management system
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Employee {
    int id; 
    string name;
    string department;
    double salary;
};
int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Employee emp;
                cout << "Enter Employee ID: ";
                cin >> emp.id;
                cin.ignore(); // Clear the newline character from the input buffer
                cout << "Enter Employee Name: ";
                getline(cin, emp.name);
                cout << "Enter Employee Department: ";
                getline(cin, emp.department);
                cout << "Enter Employee Salary: ";
                cin >> emp.salary;

                employees.push_back(emp);
                break;
            }
            case 2: {
                cout << "Employee List:" << endl;
                for (const auto& emp : employees) {
                    cout << "ID: " << emp.id 
                         << ", Name: " << emp.name 
                         << ", Department: " << emp.department 
                         << ", Salary: $" << emp.salary 
                         << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}