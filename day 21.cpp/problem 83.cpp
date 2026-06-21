#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int vowel=0,consonent=0,len=0;
    char str[100];
    cin.getline(str, 100);
    while(str[len]!='\0'){
        len++;
    }
    for (int i=0;i<len;i++){
        char c=str[i];
        if ((c>='a'&& c<='z')||(c>='A'&&c>='Z')){
             if (c =='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            vowel++;
            }
            else consonent++;
        }
    }
    cout<<"number of vowels : "<<vowel<<endl;
    cout<<"number of consonent : "<<consonent<<endl;
    return 0;
}