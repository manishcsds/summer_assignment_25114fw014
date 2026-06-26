//atm machine
#include <iostream>
using namespace std;

int main() 
{
    int pin=8521 ,balance =9000;
    int choice,amount,enterpin;
    cout<<"enter your pin";
    cin>>enterpin;
    if(enterpin!=pin){
        cout<<"pin is not correct"<<endl;
        return 0;
    }
    do{
        cout<<"\n    atm menu       \n";
        cout<<"1: check balance \n";
        cout<<"2: deposit amount\n";
        cout<<"3: withdraw amount\n";
        cout<<"4: exit\n";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"your balance is: "<<balance<<endl;
            break;
            case 2:
            cout<<"enter the amount";
            cin>>amount;
            balance+=amount;
            cout<<"deposit successfully . new balance "<<balance<<endl;
            break;
            case 3:
            cout<<"enter the amount";
            cin>>amount;
            if (amount > balance){
                cout<<"no sufficient balance"<<endl;
            }
            else{
                balance -=amount;
                cout<<"withdrawl succesfully . new balance "<< balance<<endl;
            }
            break;
            case 4:
            cout<<"thankyou for using atm"<<endl;
            break;
            default:
            cout<<"invalid choice, try again"<<endl;
        }

    } while(choice!=4);
    return 0;
}