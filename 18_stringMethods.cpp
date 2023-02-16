#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"enter your name: ";
    getline(cin>>ws, name);

    if(name.length()>12){
        cout<<"your name can't be over 12 characters";
    }else{
        cout<<"hello "<<name;
    }

    if(name.empty()){
        cout<<"nothing";
    }else{
        cout<<"hello "<<name;
    }

    cout<<name.find(' ');

    name.insert(0, "#");
    cout<<name;

    name.erase(0, 1);
    cout<<name;

    name.append("@gmail.com");
    cout<<name;

    cout<<name.at(0);

    name.clear();
    cout<<name;

    return 0;
}