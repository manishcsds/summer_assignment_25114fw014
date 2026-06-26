//check eligibility for voting
#include<iostream>
using namespace std;

int main() 
{
    int age,n;
    cout<<"number of candidate you wants";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>age;
        if(age>18){
            cout<<"candidate is eligible for voting"<<endl;
        }
        else{
            cout<<"candidate is not eligible for voting"<<endl;
        }
    }
    return 0;
}