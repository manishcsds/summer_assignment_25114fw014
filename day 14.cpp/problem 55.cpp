#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,slargest=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
     for(int i=0;i<n;i++){
        if (arr[i]>largest){
            slargest=largest;
            largest=arr[i];
            
        }
        else if (arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
     }
     if (slargest==-1){
        cout<<"no second largest element"<<endl;
     }
     else{
        cout<<slargest<<endl;
     }
      
    return 0;
}