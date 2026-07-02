//mini library system
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int year;
};
int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    Book books[n];

    do {
        cout << "\n--- Library System Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search by ID\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for book " << (i + 1) << ":\n";
                    cout << "ID: ";
                    cin >> books[i].id;
                    cin.ignore(); // Clear the input buffer
                    cout << "Title: ";
                    getline(cin, books[i].title);
                    cout << "Author: ";
                    getline(cin, books[i].author);
                    cout << "Year of Publication: ";
                    cin >> books[i].year;
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    cout << "\nDetails of book " << (i + 1) << ":\n";
                    cout << "ID: " << books[i].id << endl;
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Year of Publication: " << books[i].year << endl;
                }
                break;
            case 3: {
                int search_id;
                cout << "Enter the ID to search: ";
                cin >> search_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (books[i].id == search_id) {
                        cout << "\nDetails of book with ID " << search_id << ":\n";
                        cout << "Title: " << books[i].title << endl;
                        cout << "Author: " << books[i].author << endl;
                        cout << "Year of Publication: " << books[i].year << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book with ID " << search_id << " not found.\n";
                }
                break;
            }
            case 4: {
                int update_id;
                cout << "Enter the ID of the book to update: ";
                cin >> update_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (books[i].id == update_id) {
                        cout << "\nEnter new details for book with ID " << update_id << ":\n";
                        cout << "Title: ";
                        cin.ignore(); // Clear the input buffer
                        getline(cin, books[i].title);
                        cout << "Author: ";
                        getline(cin, books[i].author);
                        cout << "Year of Publication: ";
                        cin >> books[i].year;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book with ID " << update_id << " not found.\n";
                }
                break;
            }
            case 5: {
                int delete_id;
                cout << "Enter the ID of the book to delete: ";
                cin >> delete_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (books[i].id == delete_id) {
                        for (int j = i; j < n - 1; j++) {
                            books[j] = books[j + 1];
                        }
                        n--; // Decrease the count of books
                        found = true;
                        cout << "Book with ID " << delete_id << " deleted successfully.\n";
                        break;
                    }
                }
                if (!found) {
                    cout << "Book with ID " << delete_id << " not found.\n";
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