#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,r,arm=0,n1,c=0, start,end;
    cout<<" enter the starting number: ";
	cin>>start;
    cout<<" enter the ending number: ";
    cin>>end;
	for(int i=start;i<=end;i++){
	    n=i;
	    n1=n;
	    c=0;
	    while(n1>0){
	        n1=n1/10;
	        c++;
	    }
	    n1=n;
	    arm=0;
	    while(n1>0){
	        r=n1%10;
	        arm=arm+pow(r,c);
	        n1=n1/10;
	        
	    }
	    cout<<arm<<" ";
	}
	return 0;
}