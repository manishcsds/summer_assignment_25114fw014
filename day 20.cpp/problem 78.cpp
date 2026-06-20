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
    bool symmetric = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] != a[j][i]){
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is symmetric" << endl;
    else
        cout << "Matrix is not symmetric" << endl;
    
    return 0;
}