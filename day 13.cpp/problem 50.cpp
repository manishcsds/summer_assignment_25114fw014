#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,sum=0,avg;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        sum=sum+arr[i];
         
    }
    avg=sum/n;
    cout<<sum<<endl;
    cout<<avg;
    return 0;
}