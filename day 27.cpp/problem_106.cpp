// Employee Record Management System
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Employee {
    string name;
    string DOB;
    int age;
    int empID;
    string DateofJoining;
    string jobTitle;
};
int main(){
    vector<Employee> employees;
    int choice;
    do {
        cout << "\n--- Employee Record Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                Employee e;
                cout << "Enter employee name: ";
                getline(cin, e.name);
                cout << "Enter employee DOB: ";
                getline(cin, e.DOB);
                cout << "Enter employee age: ";
                cin >> e.age;
                cout << "Enter employee ID: ";
                cin >> e.empID;
                cin.ignore();
                cout << "Enter date of joining: ";
                getline(cin, e.DateofJoining);
                cout << "Enter job title: ";
                getline(cin, e.jobTitle);
                employees.push_back(e);
                cout << "Employee added successfully!\n";
                break;
            }
            case 2: {
                cout << "\nList of Employees:\n";
                for (int i = 0; i < employees.size(); i++) {
                    cout << "Employee ID: " << employees[i].empID << endl;
                    cout << "Name: " << employees[i].name << endl;
                    cout << "DOB: " << employees[i].DOB << endl;
                    cout << "Age: " << employees[i].age << endl;
                    cout << "Date of Joining: " << employees[i].DateofJoining << endl;
                    cout << "Job Title: " << employees[i].jobTitle << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int empID;
                cout << "Enter employee ID to search: ";
                cin >> empID;
                bool found = false;
                for (auto i = 0; i < employees.size(); i++) {
                    if (employees[i].empID == empID) {
                        cout << "Employee found!\n";
                        cout << "Employee ID: " << employees[i].empID << endl;
                        cout << "Name: " << employees[i].name << endl;
                        cout << "DOB: " << employees[i].DOB << endl;
                        cout << "Age: " << employees[i].age << endl;
                        cout << "Date of Joining: " << employees[i].DateofJoining << endl;
                        cout << "Job Title: " << employees[i].jobTitle << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!\n";
                }
                break;
            }
            case 4: {
                cout << "Exiting...\n";
                break;
            }
            default: {
                cout << "Invalid choice!\n";
                break;
            }
        }
    } while (choice != 4);
    return 0;
}