#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 1000.00;
    int choice = 0;
    do{
        cout<<"*************************"<<endl;
        cout<<"1. show balance"<<endl;
        cout<<"2. deposit money"<<endl;
        cout<<"3. withdraw money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"enter you choice: ";
        cin>>choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance-= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                break;
            default:
                cout<<"invalid input!"<<endl;
        }
    }while(choice!=4);

    return 0;
}

void showBalance(double balance){
    cout<<"your balance is $"<<setprecision(2)<<fixed<<balance<<endl;
}

double deposit(){
    double amount = 0;
    cout<<"enter amount to be deposit: ";
    cin>>amount;

    if(amount>0){
        return amount;
    }else{
        cout<<"that's not a valid amount"<<endl;
        return 0;
    }
}

double withdraw(double balance){
    double amount = 0;
    cout<<"enter amount to be withdraw: ";
    cin>>amount;

    if(amount>balance){
        cout<<"insufficient funds"<<endl;
        return 0;
    }else if(amount<0){
        cout<<"that's not a valid amount"<<endl;
    }else{
        return amount;
    }
}