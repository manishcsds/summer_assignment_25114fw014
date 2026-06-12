#include <bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int r,sum=0,c=0;
    int n1=n;
    while(n1!=0){
        c++;
        n1/=10;

    }
    n1=n;
    while(n1!=0){
        r=n1%10;
        sum=sum+pow(r,c);
        n1/=10;

    }
    return sum;
}
int main() 
{
    int n ,sum;
    cin>>n;
    int reserve=armstrong(n);
    if (reserve==n)
    cout<<n<< " is armstrong number";
    else
    cout<< n<< " is not armstrong number";
   
    return 0;
}