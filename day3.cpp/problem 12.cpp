#include <iostream>
using namespace std;

int main() 
{
  
    int a , b, x ,y;
    cout<< "enter two numbers";
    cin>>a>>b;
    
    x=a;
    y=b;
    
    while (y!=0){
      int temp = y;
      y= x%y;
      x= temp;
    }
    int gcd = x;
    int lcm = (a*b)/gcd;
    
    cout << " lcm ="<< lcm;
    return 0;
}

