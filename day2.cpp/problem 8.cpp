#include <iostream>
using namespace std;

int main() 
{
    int n, r ,rev=0,n1;
  
    cout<< "enter number";
    
    cin>>n;
    n1=n;
    
    while (n!=0){
      r=n%10;
      rev=rev*10+ r;
      n=n/10;
    }
  
  if (n1==rev){
    cout<<" number is palindrome";
  }
  else {
    cout<<" number is not palindrome";
  }
    return 0;
}
