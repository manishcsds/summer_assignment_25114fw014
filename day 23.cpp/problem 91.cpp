#include <iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main() 
{
    string str,str1;
    int found=0;
    unordered_map<char,int> freq;
    getline(cin,str);
    getline(cin,str1);
    for (int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    for (int i=0;i<str1.length();i++){
        freq[str1[i]]--;
    }
    for(auto it=freq.begin();it!=freq.end();it++){
        if(it->second!=0){
            found=1;
        }    
    }
    if (found==1){
        cout<<"string is not anagram"<<endl;
    }
    else{
        cout<<"string is anagram";
    }
    return 0;
}