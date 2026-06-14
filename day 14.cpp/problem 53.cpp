#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,key,found=0;
    cin>>n;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        if (arr[i]==key){
            cout<<"element :"<< key <<endl;
            cout<<"found at position :"<<i+1;
            found++;
            break;
        }
     }
     if(found==0){
        cout<<"element not found";
     }
    return 0;
}