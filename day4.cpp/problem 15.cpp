#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,r,arm=0,n1,c=0;
	cin>>n;
	n1=n;
	while(n1>0){
	    n1=n1/10;
	    c++;
	}
	n1=n;
	while(n1>0){
	    r=n1%10;
	    arm=arm+pow(r,c);
	    n1=n1/10;
	    
	}
	cout<<arm;
	if ( arm==n){
	    cout<<" armstrong number ";
	}
	else {
	    cout<<"number is not armstrong";
	    
	}
	
	return 0;

}
