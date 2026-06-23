#include <iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main() 
{
    string str;
    int max=0;
    char maxchar='\0';
    unordered_map<char,int> freq;
    getline(cin,str);
    for (int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    for (auto it=freq.begin();it!=freq.end();it++){
        if(it->second>max){
            max=it->second;
            maxchar=it->first;
        }
    }
    if (maxchar!=0){
        cout <<"maximum occuring character "<<maxchar<<" appear "<<max<<" time";
    }
    else{
        cout<<"string is empty";
    }
    return 0;
}