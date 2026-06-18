#include <iostream>
using namespace std;

int main() 
{
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    return 0;
}