#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c;
    cout<<"Enter the number : ";
    cin>>n;
    if(n==0){
        cout<<a<<" ";
    }
    else if(n==1){
        cout<<a<<" "<<b<<" ";
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
}
