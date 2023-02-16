#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout<<"your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<"computer's choice : ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}


char getUserChoice(){
    char player;
    cout<<"Rock - Paper - Scissors - Game"<<endl;

    do{
        cout<<"******************************"<<endl;
        cout<<"'r' for rock"<<endl;
        cout<<"'p' for paper"<<endl;
        cout<<"'s' for scissors"<<endl;
        cout<<"enter you choice: ";
        cin>>player;
    }while(player!='r' && player!='p' && player!='s');

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = (rand()%3)+1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        cout<<"rock"<<endl;
        break;
    case 'p':
        cout<<"paper"<<endl;
        break;
    case 's':
        cout<<"scissors"<<endl;
        break;
    
    default:
        break;
    }
}

void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r':
        if(computer == 'r'){
            cout<<"it's a tie!"<<endl;
        }else if(computer == 'p'){
            cout<<"you lose!"<<endl;
        }else{
            cout<<"you win!"<<endl;
        }
        break;
    case 'p':
        if(computer == 'p'){
            cout<<"it's a tie!"<<endl;
        }else if(computer == 's'){
            cout<<"you lose!"<<endl;
        }else{
            cout<<"you win!"<<endl;
        }
        break;
    case 's':
        if(computer == 's'){
            cout<<"it's a tie!"<<endl;
        }else if(computer == 'r'){
            cout<<"you lose!"<<endl;
        }else{
            cout<<"you win!"<<endl;
        }
        break;
    }
}