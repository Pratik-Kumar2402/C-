#include <iostream>
using namespace std;

int main(){
    int temp;

    cout<<"enter the temperature: ";
    cin>>temp;

    if(temp>0 && temp<30){
        cout<<"temp. is good";
    }else{
        cout<<"temp. is bad";
    }
}