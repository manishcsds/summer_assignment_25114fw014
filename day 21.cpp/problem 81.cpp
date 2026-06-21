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
    cout<<"string  : "<<str<<endl;
    cout<<"lenght of a string : "<<len;
    return 0;
}