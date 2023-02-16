#include <iostream>
using namespace std;

int main(){
    int number;

    do{
        cout<<"enter a positive number: ";
        cin>>number;
    }while(number < 0);

    cout<<"the number is: "<<number<<endl;
    return 0;
}