// menu driven string operations
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str,str2, str3;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Concatenation\n";
        cout << "7. compare string\n";
        cout << "8. reverse string\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;
            case 2:
                cout << "Length of string: " << str.length() << endl;
                break;
            case 3:
                for (int i = 0; i < str.length(); i++) {
                    str[i] = toupper(str[i]);
                }
                cout << "String in uppercase: " << str << endl;
                break;
            case 4:
                for (int i = 0; i < str.length(); i++) {
                    str[i] = tolower(str[i]);
                }
                cout << "String in lowercase: " << str << endl;
                break;
            case 5:
                // Check if the string is a palindrome
                bool isPalindrome = true;
                int len = str.length();
                for (int i = 0; i < len / 2; i++) {
                    if (str[i] != str[len - 1 - i]) {
                        isPalindrome = false;
                        break;
                    }
                }
                if (isPalindrome) {
                    cout << "The string is a palindrome.\n";
                } else {
                    cout << "The string is not a palindrome.\n";
                }
                break;
            case 6:
                cout << "Enter another string: ";
                getline(cin, str2);
                str += str2;
                cout << "Concatenated string: " << str << endl;
                break;
            case 7:
                cout << "Enter another string: ";
                getline(cin, str3);
                if (str == str3) {
                    cout << "The strings are equal.\n";
                } else {
                    cout << "The strings are not equal.\n";
                }
                break;
            case 8:
                for (int i = 0; i < str.length() / 2; i++) {
                    swap(str[i], str[str.length() - 1 - i]);
                }
                cout << "Reversed string: " << str << endl;
                break;
            case 9:
                cout << "Exiting the program.\n";
                break;  
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}