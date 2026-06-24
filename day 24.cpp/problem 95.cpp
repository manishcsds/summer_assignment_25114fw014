//longest word in string
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string findLongestWord(string str) {
    string word, longest;
    int maxLen = 0;

    stringstream ss(str); // break string into words
    while (ss >> word) {
        if ((int)word.length() > maxLen) {
            maxLen = word.length();
            longest = word;
        }
    }
    return longest;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    string longest = findLongestWord(str);
    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length() << endl;

    return 0;
}
