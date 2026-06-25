//name in alphabatical order
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    string name[n];
    for (int i=0;i<n;i++){
        getline(cin,name[i]);
    }
    sort(name ,name+n);
    cout<<"name in alphabatical order"<<endl;
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}
