#include <iostream>
using namespace std;

int main() 
{
    int n, i;
  
    cout<< "enter number";
    cin>> n;
    
   if ( n<=1){
     cout<<"number is not prime";
   } 
   else{
     for(int i=2;i<=n/2;i++){
       if (n%i==0){
         cout<<" not prime";
         return 0;
       }
     }
     cout<< "prime";
   }

    return 0;
}
