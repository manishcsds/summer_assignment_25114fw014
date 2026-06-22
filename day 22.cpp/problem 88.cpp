#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int len=0;
    string result;
    char str[100];
    cin.getline(str, 100);
    while(str[len]!='\0'){
        len++;
    }
    for (int i=0;i<len;i++){
        if(str[i]!=' '){
            result+=str[i];
        }
    }
    cout<<"string without spaces : "<<result<<endl;
    return 0;
}