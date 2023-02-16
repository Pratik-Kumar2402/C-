#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int randNum = (rand()%5)+1;

    switch (randNum){
    case 1:
        cout<<"you win a bumper prize!"<<endl;
        break;
    case 2:
        cout<<"you win a bumper t-shirt!"<<endl;
        break;
    case 3:
        cout<<"you win a bumper free lunch!"<<endl;
        break;
    case 4:
        cout<<"you win a bumper gift card!"<<endl;
        break;
    case 5:
        cout<<"you win a bumper concert ticket!"<<endl;
        break;
    default:
        break;
    }
    return 0;
}