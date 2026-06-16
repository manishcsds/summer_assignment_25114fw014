#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    int n, arr[100];
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }
    cout << endl;

    return 0;
}
