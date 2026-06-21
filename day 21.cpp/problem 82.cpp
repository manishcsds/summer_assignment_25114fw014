#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int len=0;
    char str[100];
    cin.getline(str, 100);
    while(str[len]!='\0'){
        len++;
    }
    for (int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    cout<<"reverse string  : "<<str<<endl;
    return 0;
}