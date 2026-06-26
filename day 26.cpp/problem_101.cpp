//guess the number game
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() 
{
    srand(time(0));
    int secretnumber=rand()%100 + 1;
    int guess;
    int attempts=3;
    for(int i=1;i<=attempts;i++){
        cout<<"attempts "<<i<< " enter your guess";
        cin>>guess;
        if(guess==secretnumber){
            cout<<"congratulations! you guess the number in "<<i<<" attempts"<<endl;
            return 0; 
        }
        else if(guess>secretnumber) cout<<"number is too high"<<endl;
        else cout<<"number is too low"<<endl;
    }
    cout<<"sorry , you have used all attempts. the secret number was "<<secretnumber <<endl;
    return 0;
}