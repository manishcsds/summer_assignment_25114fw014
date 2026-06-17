#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n,arr[10],arr1[10];
    cin>>n;
    unordered_set<int> set;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    unordered_set<int> s(arr, arr+n);
    for (int i=0;i<m;i++){
        if (s.find(arr1[i]) != s.end()){
            cout<<arr1[i]<<" ";
            s.erase(arr1[i]);
        }

    }
    return 0;
}