#include <iostream>
using namespace std;

int main() {
    int arr[10], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << ",";
                found = true;
                break; 
            }
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
