#include <iostream>
#include <vector>
using namespace std;

vector<int> findarrayintersection(vector<int> &A, vector<int> &B, int n) {
    vector<int> result;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                result.push_back(A[i]);
                break; // avoid duplicates from B
            }
        }
    }

    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {3, 4, 5, 6};
    int n = A.size();

    vector<int> intersection = findarrayintersection(A, B, n);

    cout << "Intersection: ";
    for (int i=0;i<intersection.size();i++) {
        cout << intersection[i]<< " ";
    }
    cout << endl;

    return 0;
}
