#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand()%100)+1;

    cout<<"****************number guessing game****************"<<endl;

    do{
        cout<<"enter a guess between(1-100): ";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"too high!"<<endl;
        }else if(guess<num){
            cout<<"too low!"<<endl;
        }else{
            cout<<"CORRECT!!!"<<endl;
            cout<<"number of tries: "<<tries;
        }
    }while(guess!=num);

    cout<<"****************************************************"<<endl;

    return 0;
}