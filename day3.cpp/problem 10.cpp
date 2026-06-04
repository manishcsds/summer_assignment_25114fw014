#include <iostream>
using namespace std;

int main() 
{
    int n, i,start,end;
  
    cout<< "enter number";
    cin>>start>>end;
    
    for (int n=start;n<=end;n++){
      
      bool isprime = true;
      
      if ( n<=1){
        isprime = false;
        
   } 
   else{
     
     for(int i=2;i<=n/2;i++){
       
       if (n%i==0){
         
         isprime = false;
         
         break;
         
       }
     }
     
   }
     if ( isprime)


     cout << n<<" ";
   }
    return 0;
}
