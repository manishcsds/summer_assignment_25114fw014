#include <iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main() 
{
    string str;
    int found=0;
    unordered_map<char,int> freq;
    getline(cin,str);
    for (int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    for (int i=0;i<str.length();i++){
        if (freq[str[i]]>1){
            cout<<"first repeating character : "<< str[i]<<endl;
            found=1;
            break;
        }
    }
    if (found==0){
        cout<<"no character found"<<endl;
    }
    return 0;
}