//remove duplicates from a string
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(string str) {
    unordered_set<char> seen;
    string result = "";

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            result += ch;     // keep only first occurrence
            seen.insert(ch);  // mark as seen
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string output = removeDuplicates(str);
    cout << "String after removing duplicates: " << output << endl;

    return 0;
}
