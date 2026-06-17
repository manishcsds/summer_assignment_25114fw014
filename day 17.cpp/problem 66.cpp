#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n,arr[10],arr1[10];
    cin>>n;
    unordered_set<int> set;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        set.insert(arr[i]);

    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        set.insert(arr1[i]);
    }
    for (auto it=set.begin();it != set.end(); it++) {
    cout << *it << " ";
    }
    return 0;
}