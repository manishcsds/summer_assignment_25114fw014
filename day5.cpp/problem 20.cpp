#include <iostream>
using namespace std;
int main(){
    long long n ;
    cin>> n;
    long long largestfactor=-1;
    while (n%2==0){
        largestfactor=2;
        n=n/2;
    }
    for (int i=3;i<=n;i=i+2){
        while ( n%i==0){
            largestfactor=i;
            n=n/i;
        }
    }
    if (n>2){
        largestfactor=n;
    }
    cout << largestfactor << endl;
    return 0;
}