//words sorted by length
#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    string words[n];
    cin.ignore();
    for (int i=0;i<n;i++){
        getline(cin,words[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(words[j].length()>words[j+1].length()){
                string temp=words[j];
                words[j]=words[j+1];
                words[j+1]=temp;
            }
        }
    }
    cout<<"words sorted by length"<<endl;
    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }
    return 0;
}
    