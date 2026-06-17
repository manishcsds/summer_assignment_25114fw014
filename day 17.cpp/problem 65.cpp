#include<iostream>
using namespace std;
int main(){
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m,arr1[10];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int merge[20];
    for(int i=0;i<n;i++){
        merge[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        merge[n+i]=arr1[i];
    }
    for(int i=0;i<n+m;i++){
        cout<<merge[i]<<" ";
    }
    return 0;
}