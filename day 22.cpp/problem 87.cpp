#include <iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main() 
{
    char str[100];
    cin.getline(str, 100);
    unordered_map<char,int> freq;
    for (int i=0; i < strlen(str);i++){
        char ch=str[i];
        if (ch!=' '){
            freq[ch]++;
        }
    }
    for( auto it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
    return 0;
}