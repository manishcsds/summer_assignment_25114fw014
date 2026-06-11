#include <iostream>
using namespace std;

bool isprime(int n){
    if (n<=1)
    return false;
    else{
        for (int i=2;i<=n/2;i++){
            if (n%i==0){
                return false;
            } 
        }
        return true;
    }
    
 }
int main() 
{
    int n;
    cin>>n;
    if (isprime(n))
    cout<<n<<" is prime";
    else
    cout<<n<<" is not prime";
    
    return 0;
}