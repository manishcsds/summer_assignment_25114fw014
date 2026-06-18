#include <iostream>
using namespace std;

int main() 
{
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    return 0;
}