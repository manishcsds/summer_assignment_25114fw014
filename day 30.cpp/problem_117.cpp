// student record system using array and string
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name,father_name, mother_name, address, date_of_birth, blood_group;
    int id, roll_number, phone_number;
    double gpa;
};
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];

    do{
        cout << "\n--- Student Record System Menu ---\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search by ID\n";
        cout << "4. Update Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for student " << (i + 1) << ":\n";
                    cout << "Name: ";
                    cin.ignore(); // Clear the input buffer
                    getline(cin, students[i].name);
                    cout << "Father's Name: ";
                    getline(cin, students[i].father_name);
                    cout << "Mother's Name: ";
                    getline(cin, students[i].mother_name);
                    cout << "Address: ";
                    getline(cin, students[i].address);
                    cout << "Date of Birth (DD/MM/YYYY): ";
                    getline(cin, students[i].date_of_birth);
                    cout << "Blood Group: ";
                    getline(cin, students[i].blood_group);
                    cout << "ID: ";
                    cin >> students[i].id;
                    cout << "Roll Number: ";
                    cin >> students[i].roll_number;
                    cout << "Phone Number: ";
                    cin >> students[i].phone_number;
                    cout << "GPA: ";
                    cin >> students[i].gpa;
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    cout << "\nDetails of student " << (i + 1) << ":\n";
                    cout << "Name: " << students[i].name << endl;
                    cout << "Father's Name: " << students[i].father_name << endl;
                    cout << "Mother's Name: " << students[i].mother_name << endl;
                    cout << "Address: " << students[i].address << endl;
                    cout << "Date of Birth: " << students[i].date_of_birth << endl;
                    cout << "Blood Group: " << students[i].blood_group << endl;
                    cout << "ID: " << students[i].id << endl;
                    cout << "Roll Number: " << students[i].roll_number << endl;
                    cout << "Phone Number: " << students[i].phone_number << endl;
                    cout << "GPA: " << students[i].gpa << endl;
                }
                break;
            case 3: {
                int search_id;
                cout << "Enter the ID to search: ";
                cin >> search_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (students[i].id == search_id) {
                        cout << "\nDetails of student with ID " << search_id << ":\n";
                        cout << "Name: " << students[i].name << endl;
                        cout << "Father's Name: " << students[i].father_name << endl;
                        cout << "Mother's Name: " << students[i].mother_name << endl;
                        cout << "Address: " << students[i].address << endl;
                        cout << "Date of Birth: " << students[i].date_of_birth << endl;
                        cout << "Blood Group: " << students[i].blood_group << endl;
                        cout << "Roll Number: " << students[i].roll_number << endl;
                        cout << "Phone Number: " << students[i].phone_number << endl;
                        cout << "GPA: " << students[i].gpa << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student with ID " << search_id << " not found.\n";
                }
                break;
            }
            case 4: {
                int update_id;
                cout << "Enter the ID of the student to update: ";
                cin >> update_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (students[i].id == update_id) {
                        cout << "\nEnter new details for student with ID " << update_id << ":\n";
                        cout << "Name: ";
                        cin.ignore(); // Clear the input buffer
                        getline(cin, students[i].name);
                        cout << "Father's Name: ";
                        getline(cin, students[i].father_name);
                        cout << "Mother's Name: ";
                        getline(cin, students[i].mother_name);
                        cout << "Address: ";
                        getline(cin, students[i].address);
                        cout << "Date of Birth (DD/MM/YYYY): ";
                        getline(cin, students[i].date_of_birth);
                        cout << "Blood Group: ";
                        getline(cin, students[i].blood_group);
                        cout << "Roll Number: ";
                        cin >> students[i].roll_number;
                        cout << "Phone Number: ";
                        cin >> students[i].phone_number;
                        cout << "GPA: ";
                        cin >> students[i].gpa;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student with ID " << update_id << " not found.\n";
                }
                break;
            }
            case 5: {
                int delete_id;
                cout << "Enter the ID of the student to delete: ";
                cin >> delete_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (students[i].id == delete_id) {
                        for (int j = i; j < n - 1; j++) {
                            students[j] = students[j + 1];
                        }
                        n--; // Decrease the count of students
                        cout << "Student with ID " << delete_id << " deleted successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student with ID " << delete_id << " not found.\n";
                }
                break;
            }
            case 6:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (true);     
    return 0;
}