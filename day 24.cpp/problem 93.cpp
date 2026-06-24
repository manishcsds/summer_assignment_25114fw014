//string rotation program
#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length()!= s2.length()) return false;
    int n=s1.length();
    for (int i=0;i<n;i++) {
        string rotated = s1.substr(i)+ s1.substr(0, i);
        if (rotated == s2) {
            return true;
        }
    }
    return false;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (isRotation(str1, str2))
        cout<<"Strings are rotations of each other."<<endl;
    else
        cout<<"Strings are NOT rotations of each other."<<endl;

    return 0;
}
