#include <iostream>
using namespace std;

int main(){
    string students[] = {"spongebob", "patrick", "squidward"};

    for(string student : students){
        cout<<student<<endl;
    }
    return 0;
}