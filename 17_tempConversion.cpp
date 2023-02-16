#include <iostream>
using namespace std;

int main(){
    double temp;
    char unit;

    cout<<"**********temperature conversion***********";
    cout<<"F = Fahrenheit"<<endl;
    cout<<"C = Celsius"<<endl;
    cout<<"what unit would you like to convert to: ";
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<<"enter the temperature is Celcius : ";
        cin>>temp;

        temp=(1.8*temp)+32.0;
        cout<<"temperature is: "<<temp<<"F"<<endl;
    }else if(unit == 'C' || unit == 'c'){
        cout<<"enter the temperature is Fahrenheit : ";
        cin>>temp;

        temp=(temp-32)/1.8;
        cout<<"temperature is: "<<temp<<"C"<<endl;
    }else{
        cout<<"please enter in only C or F";
    }

    cout<<"***************************************"<<endl;

    return 0;
}