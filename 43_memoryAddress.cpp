#include<iostream>
using namespace std;

int main(){
    string name = "pratik";
    int age = 20;
    bool student = true;

    cout<<&name<<endl; // variable address(hexadecimal)
    cout<<&age<<endl;
    cout<<&student<<endl;

    return 0;
}