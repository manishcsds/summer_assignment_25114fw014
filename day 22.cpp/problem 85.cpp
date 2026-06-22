#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int len=0;
    char str[100],str1[100];
    cin.getline(str, 100);
    strcpy(str1,str);
    while(str[len]!='\0'){
        len++;
    }
    for (int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    if(strcmp(str1,str)==0){
        cout<<"string is pallindrome";
    }
    else cout<<"string is not pallindrome";
    return 0;
}