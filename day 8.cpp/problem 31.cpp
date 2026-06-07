#include <iostream>
using namespace std;

int digitsum(int n ,int sum=0){
  
  if ( n == 0)
    return sum ;
    
  return digitsum( n/10 , sum + n%10) ;

}
int main() 
{
  int n ;
  cin>>n ;
  
  cout<< "sum of the digits :"<< digitsum(n);

  return 0;
}