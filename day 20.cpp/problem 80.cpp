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
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum += a[i][j];
        }
        cout<<"sum of row :"<< j << " is "<<sum<<endl;
    }
    return 0;
}