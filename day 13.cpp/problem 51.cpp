 #include <iostream>
using namespace std;

int main() 
{
    int arr[10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    //int smallest=arr[0];
     for(int i=1;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        } 
        /*if (arr[i]<smallest){
            smallest=arr[i];
        }*/
    }
    cout<<largest<<endl;
    //cout<<smallest;
    return 0;
}