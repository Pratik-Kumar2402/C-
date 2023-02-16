#include <iostream>
using namespace std;

int main(){
    string name;

    while(name.empty()){
        cout<<"enter your name: ";
        getline(cin>>ws, name);
    }

    cout<<"hello "<<name;
}