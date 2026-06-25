//merge two sorted arrays
#include <iostream>
using namespace std;

int main() 
{
    int n,n1,arr[100],arr1[100];
    cin>>n;
    cin>>n1;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
     for (int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int merged[n+n1];
    int i=0,j=0,k=0;
    while(i<n && j<n1){
        if(arr[i]<arr1[j]){
            merged[k++]=arr[i++];
        }
        else{
            merged[k++]=arr1[j++];
        }
    }
    while (i<n) merged[k++] = arr[i++];
    while (j<n1) merged[k++] = arr1[j++];
    for (int x=0; x<k; x++) {
        cout<< merged[x] << " ";
    }
    cout << endl;

    return 0;
}
