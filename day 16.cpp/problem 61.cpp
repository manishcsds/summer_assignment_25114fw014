#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n;
    cin>>n;
    int found;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int  xorarr=0;
    for( int i=0;i<n-1;i++){
        xorarr ^=arr[i];
    }
    int xorall=0;
    for (int i=1; i<=n; i++) {
        xorall ^= i;
    }
    int missnum = xorall ^ xorarr;
    cout<<"missing number is :"<<missnum;

    return 0;
}
