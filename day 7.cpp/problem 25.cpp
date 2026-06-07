#include <iostream>
using namespace std;

int fact(int n){
  if (n<=1){
    return 1; 
  } 
  return n*fact(n-1);

}
int main() 
{
  int n , result;
  cin>>n;
  result = fact(n);
  
  cout<< "factorial of " << n  << " is "<< result;
    return 0;
}