#include <iostream>
using namespace std;

int fibb(int n){
  
  if ( n==0){
    return 0;
  } 
  if (n==1){
    return 1; 
  }  
  return fibb(n-1) + fibb(n-2);

}
int main() 
{
  int n , result;
  cin>>n;
  
  for ( int i=0; i<n; i++){
    cout<< fibb(i)<< " ";
  }
    return 0;
}