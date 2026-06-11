#include <iostream>
using namespace std;

int fact(int n){
    if (n<=1)
    return 1;
    else {
        int c=1;
        for(int i=1;i<=n;i++){
            c=c*i;
        }
        return c;
    }
}
int main() 
{
    int n;
    cin>>n;
    int result=fact(n);
    cout<< result <<endl;
   
    return 0;
}