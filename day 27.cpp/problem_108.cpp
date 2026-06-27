//marksheet generation system
#include <iostream>
#include <vector>
#include <string>
using namespace std;   
struct Student {
    string name;
    int rollno;
    vector<string> subjects;
    vector<int> marks;
};
int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "\n--- Marksheet Generation System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Student s;
                cout << "Enter student name: ";
                cin >> s.name;
                cout << "Enter student roll number: ";
                cin >> s.rollno;
                int numSubjects;
                cout << "Enter number of subjects: ";
                cin >> numSubjects;
                s.marks.resize(numSubjects);
                s.subjects.resize(numSubjects);
                for (int i = 0; i < numSubjects; i++) {
                    cout << "Enter name for subject " << (i + 1) << ": ";
                    cin >> s.subjects[i];
                    cout << "Enter marks for " << s.subjects[i] << ": ";
                    cin >> s.marks[i];
                }
                students.push_back(s);
                break;
            }
            case 2: {
                cout << "\nList of Students:\n";
                for (const auto& student : students) {
                    cout << "Roll No: " << student.rollno << endl;
                    cout << "Name: " << student.name << endl;
                    cout << "Subjects and Marks:\n";
                    for (auto i=0; i<student.marks.size(); i++) {
                        cout << "  " << student.subjects[i] << ": " << student.marks[i] << endl;
                    }
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int rollno;
                cout << "Enter roll number to search: ";
                cin >> rollno;
                bool found = false;
                for (auto i=0; i<students.size(); i++) {
                    if (students[i].rollno == rollno) {
                        cout << "Roll No: " << students[i].rollno << endl;
                        cout << "Name: " << students[i].name << endl;
                        cout << "Subjects and Marks:\n";
                        for (auto j=0; j<students[i].marks.size(); j++) {
                            cout << "  " << students[i].subjects[j] << ": " << students[i].marks[j] << endl;
                        }
                        cout << "-----------------------\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "No student found with roll number " << rollno << ".\n";
                }
                break;
            }
            case 4: {
                int rollno;
                cout << "Enter roll number to update marks: ";
                cin >> rollno;
                bool found = false;
                for (auto i=0; i<students.size(); i++) {
                    if (students[i].rollno == rollno) {
                        int numSubjects;
                        cout << "Enter number of subjects: ";
                        cin >> numSubjects;
                        students[i].marks.resize(numSubjects);
                        students[i].subjects.resize(numSubjects);
                        for (int j = 0; j < numSubjects; j++) {
                            cout << "Enter name for subject " << (j + 1) << ": ";
                            cin >> students[i].subjects[j];
                            cout << "Enter marks for " << students[i].subjects[j] << ": "; 
                            cin >> students[i].marks[j];
                        }
                        found = true;
                        cout << "Marks updated successfully!\n";
                        break;
                    }
                }
                if (!found) {
                    cout << "No student found with roll number " << rollno << ".\n";
                }
                break;
            }
            case 5:
                cout << "Exiting the program.\n";
                break;  
            default:
                cout << "Invalid choice! Please try again.\n";  
        }
    } while (choice != 5);  

    return 0;
}