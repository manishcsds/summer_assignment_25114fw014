//library management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 struct Book {
    string title;
    string author;
    int bookID;
    bool isAvailable;
};
int main() {
    vector<Book> books;
    int choice;
    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book Availability\n";
        cout << "5. Issue Book\n";
        cout << "6. Return Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Book b;
                cout << "Enter book title: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, b.title);
                cout << "Enter book author: ";
                getline(cin, b.author);
                cout << "Enter book ID: ";
                cin >> b.bookID;
                b.isAvailable = true;  
                books.push_back(b);
                break;
            }
            case 2: {
                cout << "\nList of Books:\n";
                for (auto i=0; i<books.size(); i++) {
                    const auto& book = books[i];
                    cout << "Book ID: " << book.bookID << endl;
                    cout << "Title: " << book.title << endl;
                    cout << "Author: " << book.author << endl;
                    cout << "Availability: " << (book.isAvailable ? "Available" : "Not Available") << endl;
                    cout << "-----------------------\n";
                }
                break;
            }
            case 3: {
                int bookID;
                cout << "Enter book ID to search: ";
                cin >> bookID;
                bool found = false;
                for (auto i=0; i<books.size(); i++) {
                    const auto& book = books[i];
                    if (book.bookID == bookID) {
                        cout << "Book found:\n";
                        cout << "Title: " << book.title << endl;
                        cout << "Author: " << book.author << endl;
                        cout << "Availability: " << (book.isAvailable ? "Available" : "Not Available") << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book not found.\n";
                }
                break;
            }
            case 4: {
                int bookID;
                cout << "Enter book ID to update availability: ";
                cin >> bookID;
                bool found = false;
                for (auto i=0; i<books.size(); i++) {
                    auto& book = books[i];
                    if (book.bookID == bookID) {
                        book.isAvailable = !book.isAvailable; // Toggle availability
                        cout << "Book availability updated.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book not found.\n";
                }
                break;
            }
            case 5:
                int bookID;
                cout << "Enter book ID to issue: ";
                cin >> bookID;
                {
                    bool found = false;
                    for (auto i=0; i<books.size(); i++) {
                        auto& book = books[i];
                        if (book.bookID == bookID) {
                            if (book.isAvailable) {
                                book.isAvailable = false;
                                cout << "Book issued successfully.\n";
                            } else {
                                cout << "Book is not available for issue.\n";
                            }
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Book not found.\n";
                    }
                }
                break;
            case 6:
                cout << "Enter book ID to return: ";
                cin >> bookID;
                {
                    bool found = false;
                    for (auto i=0; i<books.size(); i++) {
                        auto& book = books[i];
                        if (book.bookID == bookID) {
                            if (!book.isAvailable) {
                                book.isAvailable = true;
                                cout << "Book returned successfully.\n";
                            } else {
                                cout << "Book is already available.\n";
                            }
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Book not found.\n";
                    }
                }
                break;
            case 7:
                cout << "Exiting the program.\n";
                break; 
            default:
                cout << "Invalid choice. Please try again.\n";  
        }
    } while (choice != 7);
    return 0;   
}