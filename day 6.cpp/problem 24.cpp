#include <iostream>
using namespace std;

int main() 
{
  int n,result=1,x;
  cout<< " enter the base";
  cin>>x;
  
  cout<< " enter the power";
  cin>>n;
   for ( int i=1; i<=n; i++){
     result=result*x;
   }
  
  
    cout<< result;
    return 0;
}