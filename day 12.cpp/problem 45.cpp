#include <iostream>
using namespace std;

int pallindrome(int n){
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;

    }
    return sum;
}
int main() 
{
    int n ,sum;
    cin>>n;
    int reserve=pallindrome(n);
    if (reserve==n)
    cout<<n<< " is pallindrome";
    else
    cout<< n<< " is not pallindrome";
   
    return 0;
}