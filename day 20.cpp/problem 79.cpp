#include <iostream>
using namespace std;

int main() 
{
    int n,m,a[10][10],b[10][10];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum += a[i][j];
        }
        cout<<"sum of row :"<< i << " is "<<sum<<endl;
    }
    return 0;
}