#include <iostream>
using namespace std;

int main() 
{
    int n,m,a[10][10],b[10][10],dig1,dig2;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }int p,q;
    cin>>p>>q;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    if (m != p){
        cout<<"multiplication is not possible"<<endl;
        return 0;
    }
    int c[10][10]= {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for (int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        dig1+=c[i][i];
        dig2+=c[i][n-i+1];
    }
    cout<<"digonal1 is "<<dig1 <<endl;
    cout<<"digonal2 is "<<dig2 <<" ";
    return 0;
}