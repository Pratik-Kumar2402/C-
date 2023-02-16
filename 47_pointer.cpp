#include<iostream>
using namespace std;

int main(){
    /* pointers = variables that stores a memory address of another variable
                  sometimes it's easier to work with an address
                  
                  & address-of operator
                  * dereference operator
    */
    
    string name ="pratik";
    int age = 20;
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout<<pName<<endl; //address
    cout<<*pName<<endl; //value
    cout<<*pAge<<endl;
    cout<<freePizzas<<endl;
    cout<<pFreePizzas<<endl;
    cout<<*pFreePizzas<<endl;

    return 0;
}