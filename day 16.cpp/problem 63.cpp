#include <iostream>
using namespace std;

int main() 
{
    int n,arr[10],i,j;
    int sum,found=0;
    cin>>n;
    cin>>sum;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==sum){
                cout<<arr[i]<<"+"<<arr[j] <<"="<<sum<<endl;
                found++;
            }
        }
    }
    if (found==0){
        cout<<"no pair found";
    }
 
    return 0;
}