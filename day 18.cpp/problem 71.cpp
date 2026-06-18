#include <iostream>
using namespace std;

int main() 
{
    int n,arr[10],mid;
    cin>>n;
     
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,high=n-1;
    bool found=false;
    int key;
    cin>>key;
    while(low<=high){
        mid=low+(high-low)/2;
        if (arr[mid]==key){
            cout<<"element found at index :"<<mid<<endl;
            found=true;
            break;
            }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else {
            high=mid-1;

        }
    }
    if (!found){
        cout<<"element not found";
    }
    
    return 0;
}