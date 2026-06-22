#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int countwords=0;
    char str[100];
    cin.getline(str, 100);

    for (int i=0; i < strlen(str);i++){
        if (str[i]!=' ' && (i==0||str[i-1]==' ')){
            countwords++;
        }
    }
    cout<<"number of words :  "<< countwords;
    return 0;
}