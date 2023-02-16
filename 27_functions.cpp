#include <iostream>
using namespace std;

void happyBirthday(string name);

int main(){
    string name = "pratik";

    happyBirthday(name);
    happyBirthday(name);
    happyBirthday(name);

    return 0;
}

void happyBirthday(string name){
    cout<<"happy birthday to "<<name<<"!!!"<<endl;
}