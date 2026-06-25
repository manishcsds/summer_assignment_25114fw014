//count frequency of characters in a string
#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main() 
{
    string str;
    getline(cin,str);
    unordered_map<char , int> freq;
    for (int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    int found=0;
     for (auto it=freq.begin();it!=freq.end();it++){
        if(it->second > 1){
            cout<<it->first<< "=" << it->second << " ";
            found=1;
        }
     }
    if (found==0){
        cout<<"no common element";
    } 
    cout<<endl;
    return 0;
}
