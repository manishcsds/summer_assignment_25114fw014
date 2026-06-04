#include <iostream>
using namespace std;

int main() 
{
    int n,pro=1,r;
    cout<< "enter number";
    cin>>n;
    
    while (n>0){
      r=n%10;
      pro= pro*r;
      n=n/10;
    }
    cout<< pro << endl;
    return 0;
}

