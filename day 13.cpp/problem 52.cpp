#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,even=0,odd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        if (arr[i]%2==0)
        even++;
        else
        odd++;
         
    }
    cout<<even<<endl;
    cout<<odd;
    return 0;
}