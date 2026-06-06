#include <iostream>
using namespace std;

int main() 
{
  int n, i=0,binary[32];
  cin>>n;
  
  while(n!=0){
    binary[i]=n%2;
    i++;
    n=n/2;
  }
  for (int j=i-1;j>=0;j--){
    cout<< binary[j];
  }
    return 0;
}