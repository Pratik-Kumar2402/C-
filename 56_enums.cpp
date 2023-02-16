#include<iostream>
using namespace std;

enum Day{sunday = 0, friday = 5};

int main(){
    Day today = sunday;

    switch (today){
    case sunday:
        cout<<"It's sunday";
        break;
    case friday:
        cout<<"It's friday";
        break;
    default:
        break;
    }
}