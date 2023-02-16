#include <iostream>
using namespace std;

// parenthesis>>multiplication>>division>>addition>>substraction

int main(){
    int students = 20;

    // students = students+1;
    // students+=1;
    students++;
    cout<<students<<endl;

    // students = students - 1;
    // students-=2;
    students--;
    cout<<students<<endl;

    // students = students * 2;
    students*=2;
    cout<<students<<endl;

    // students=students/2;
    students/=2;
    cout<<students<<endl;

    // students=students%2;
    students%=2;
    cout<<students<<endl;

    students = 6-(5+4)*3/2;
    cout<<students<<endl;
    
    return 0;
}