#include <iostream>
using namespace std;

int main() 
{
    int n,sum=0,r;
    cout<< "enter number";
    cin>>n;
    
    while (n>0){
      r=n%10;
      sum+=r;
      n=n/10;
    }
    cout<< sum<< endl;
    return 0;
}
