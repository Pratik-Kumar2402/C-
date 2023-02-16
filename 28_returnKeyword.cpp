#include <iostream>
#include <cmath>
using namespace std;

double square(double length);

int main(){
    double length = 5.0;
    cout<<square(length)<<" cm^2";

}

double square(double length){
    return pow(length, 2);
}