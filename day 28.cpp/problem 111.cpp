//ticket booking system
#include <iostream>
#include <vector>
using namespace std;

struct Ticket {
    int ticketID;
    string eventName;
    string date;
    double price;
    bool isAvailable;
};

int main() {
    vector<Ticket> tickets;
    int choice;

    do {
        cout << "\nTicket Booking System\n";
        cout << "1. book ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. cancel ticket\n";
        cout << "4. search ticket\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Ticket t;
                cout << "Enter ticket ID: ";
                cin >> t.ticketID;
                cout << "Enter event name: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, t.eventName);
                cout << "Enter date (YYYY-MM-DD): ";
                getline(cin, t.date);
                cout << "Enter price: $";
                cin >> t.price;
                t.isAvailable = true; // Initially, the ticket is available
                tickets.push_back(t);
                cout << "Ticket booked successfully.\n";
                break;
            }
            case 2:
                cout << "\nList of Tickets:\n";
                for (const auto& ticket : tickets) {
                    cout << "Ticket ID: " << ticket.ticketID << endl;
                    cout << "Event Name: " << ticket.eventName << endl;
                    cout << "Date: " << ticket.date << endl;
                    cout << "Price: $" << ticket.price << endl;
                    cout << "Availability: " << (ticket.isAvailable ? "Available" : "Not Available") << endl;
                    cout << "-----------------------\n";
                }
                break;   
            case 3: {
                int ticketID;
                cout << "Enter ticket ID to cancel: ";
                cin >> ticketID;
                for (auto& ticket : tickets) {
                    if (ticket.ticketID == ticketID) {
                        if (ticket.isAvailable) {
                            ticket.isAvailable = false;
                            cout << "Ticket canceled successfully.\n";
                        } else {
                            cout << "Ticket is not available for cancellation.\n";
                        }
                        break;
                    }
                }
                break;
            }
            case 4:
                int ticketID;
                cout << "Enter ticket ID to search: ";
                cin >> ticketID;
                {
                    bool found = false;
                    for (const auto& ticket : tickets) {
                        if (ticket.ticketID == ticketID) {
                            cout << "Ticket found:\n";
                            cout << "Event Name: " << ticket.eventName << endl;
                            cout << "Date: " << ticket.date << endl;
                            cout << "Price: $" << ticket.price << endl;
                            cout << "Availability: " << (ticket.isAvailable ? "Available" : "Not Available") << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Ticket not found.\n";
                    }
                }
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}