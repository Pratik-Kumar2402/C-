#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout<<"enter side A: ";
    cin>>a;

    cout<<"enter side B: ";
    cin>>b;

    c=sqrt(pow(a,2)+pow(b,2));

    cout<<"side c: "<<c;

    return 0;
}