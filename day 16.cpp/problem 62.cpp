#include <iostream>
using namespace std;

int main() 
{
    int n,arr[10];
    int maxfreq=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxnum = arr[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count>maxfreq){
            maxfreq=count;
            maxnum=arr[i];
         
        }
    }
    cout<<"number with max frequency :"<<maxnum<<endl;
    cout<<"frequency :"<<maxfreq <<endl;

    return 0;
}