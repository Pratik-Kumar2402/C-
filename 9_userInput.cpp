#include <iostream>
using namespace std;

int main(){
    string name;

    cout<<"What's your name? : ";
    getline(cin>>ws, name);

    // cout<<"What's your name? : ";
    // cin>>name;

    cout<<"hello "<<name;

    return 0;
}