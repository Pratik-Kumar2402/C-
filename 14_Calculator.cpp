#include <iostream>
using namespace std;

int main(){
    char op;
    double num1;
    double num2;
    double result;
    cout<<"*************Calculator*************"<<endl;

    cout<<"enter either (+ - * /): ";
    cin>>op;

    cout<<"enter #1: ";
    cin>>num1;

    cout<<"enter #2: ";
    cin>>num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout<<"result: "<<result<<endl;
            break;
        case '-':
            result = num1 - num2;
            cout<<"result: "<<result<<endl;
            break;
        case '*':
            result = num1 * num2;
            cout<<"result: "<<result<<endl;
            break;
        case '/':
            result = num1 / num2;
            cout<<"result: "<<result<<endl;
            break;
        default:
            cout<<"that wasn't a valid response"<<endl;
            break;
    }
    cout<<"*******************************************";
    return 0;
}