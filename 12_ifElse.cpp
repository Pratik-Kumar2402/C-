#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"enter your age: ";
    cin>>age;

    if(age>=100){
        cout<<"you are too old to enter this site!"<<endl;
    }
    else if(age>=18){
        cout<<"welcome to the site!"<<endl;
    }
    else if(age < 0){
        cout<<"You haven't been born yet!"<<endl;
    }
    else{
        cout<<"you are not old enough to enter the site!"<<endl;
    }
    
}