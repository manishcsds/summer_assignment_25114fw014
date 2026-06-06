#include <iostream>
using namespace std;

int main() 
{
  int n,dec=0,base=1,r;
  cin>>n;
  
  while(n>0){
    r=n%10;
    dec=dec + r*base;
    base=base*2;
    n=n/10;
  }
    cout<< dec;
    return 0;
}