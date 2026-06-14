#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,element,frequency=0,found=0;
    cin>>n;
    cin>>element;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        if (arr[i]==element){
            frequency++;
            found=1;
        }    
     }
     cout<<"frequency of the element is :"<<frequency<<endl;
     if(found==0){
        cout<<"element not exist";
     }
    return 0;
}