#include <iostream>
using namespace std;

int sum(int a,int b){
    if (a>b)
    return a;
    
    else 
    return b;

 }
int main() 
{
    int a,b;
    cin>>a>>b;
    int result=max(a,b);
    cout<< result << " is the maximum"<< endl;
    return 0;
}