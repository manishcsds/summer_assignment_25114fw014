#include <iostream>
using namespace std;

int main() 
{
    int n , sum=0 ,r,temp;
    cin>> n;
    temp=n;
    while(n!=0){
      r=n%10;
      int fact=1;
      for(int i=1; i<=r;i++){
        fact=fact*i;
      }
      sum+=fact;
      n=n/10;
    }
    if ( sum==temp){
      cout<<" strong number";
    }
    else {
      cout<< " not strong number ";
    }
    return 0;
}
