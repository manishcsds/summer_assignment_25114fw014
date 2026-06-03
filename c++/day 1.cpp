
#include <iostream>
using namespace std;

int main() 
{
  int n , count=0,r;
  cout<<"enter number :";
  cin>> n;
  
  while (n>0){
    r=n/10;
    count++;
    n=n/10;
  }
  cout<< count;
    return 0;
}