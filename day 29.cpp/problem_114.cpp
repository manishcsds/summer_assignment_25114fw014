// menu driven array operations
#include <iostream> 
using namespace std;

int main() {
    int choice, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- Array Operations Menu ---\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum\n";
        cout << "3. Find Minimum\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Calculate Average\n";
        cout << "6. Search Element\n";
        cout << "7. Insert Element\n";
        cout << "8. delete element\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 2: {
                int max = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Maximum element: " << max << endl;
                break;
            }
            case 3: {
                int min = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Minimum element: " << min << endl;
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                cout << "Sum of elements: " << sum << endl;
                break;
            }
            case 5: {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                double average = static_cast<double>(sum) / size;
                cout << "Average of elements: " << average << endl;
                break;
            }
            case 6: {
                int element;
                cout << "Enter the element to search: ";
                cin >> element;
                bool found = false;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == element) {
                        cout << "Element found at index: " << i << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Element not found in the array.\n";
                }
                break;
            }
            case 7: {
                if (size >= sizeof(arr)/sizeof(arr[0])) {
                    cout << "Array is full. Cannot insert new element.\n";
                    break;
                }
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position (0 to " << size << "): ";
                cin >> position;
                if (position < 0 || position > size) {
                    cout << "Invalid position.\n";
                    break;
                }
                for (int i = size; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;
                size++;
                cout << "Element inserted successfully.\n";
                break;
            }
            case 8:{
                int position;
                cout << "Enter the position of the element to delete (0 to " << size - 1 << "): ";
                cin >> position;
                if (position < 0 || position >= size) {
                    cout << "Invalid position.\n";
                    break;
                }
                for (int i = position; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
                cout << "Element deleted successfully.\n";
                break;
            }
            case 9:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (true);

    return 0;
}