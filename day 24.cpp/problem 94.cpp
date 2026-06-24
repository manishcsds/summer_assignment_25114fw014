//compressed string program
#include <iostream>
#include <string>
using namespace std;

string compressString(string str){
    string result ="";
    int n=str.length();

    for (int i=0;i<n;i++) {
        int count = 1;
        while (i<n - 1 && str[i]==str[i + 1]) {
            count++;
            i++;
        }
        result +=str[i];           
        result +=to_string(count); 
    }
    return result;
}

int main() {
    string str;
    getline(cin, str);
    string compressed = compressString(str);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}
