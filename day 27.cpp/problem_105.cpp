//student management system 
// Student Record Management System
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    string DOB;
    int age;
    int rollno;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Student s;
                cout << "Enter student name: ";
                getline(cin, s.name);
                cout << "Enter student DOB: ";
                getline(cin, s.DOB);
                cout << "Enter student age: ";
                cin >> s.age;
                cout << "Enter student roll number: ";
                cin >> s.rollno;
                cin.ignore();
                students.push_back(s);
                cout << "Student added successfully!\n";
                break;
            }
            case 2: {
                cout << "\nList of Students:\n";
                for (int i = 0; i < students.size(); i++) {
                    cout << "Roll No: " << students[i].rollno << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "DOB: " << students[i].DOB << endl;
                    cout << "Age: " << students[i].age << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int roll;
                cout << "Enter roll number to search: ";
                cin >> roll;
                bool found = false;
                for (auto &s : students) {
                    if (s.rollno == roll) {
                        cout << "\nRecord Found:\n";
                        cout << "Roll No: " << s.rollno << endl;
                        cout << "Name: " << s.name << endl;
                        cout << "DOB: " << s.DOB << endl;
                        cout << "Age: " << s.age << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "No student found with roll number " << roll << ".\n";
                break;
            }
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
