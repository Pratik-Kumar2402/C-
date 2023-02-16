#include<iostream>
using namespace std;

int main(){
    string foods[5];
    string temp;
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i=0; i<size; i++){
        cout<<"enter a food you like or 'q' to quit #"<<i+1<<": ";
        getline(cin>>ws, temp);

        if(temp=="q"){
            break;
        }else{
            foods[i]=temp;
        }
    }

    cout<<"you like the following food: "<<endl;

    for(int i=0; !foods[i].empty(); i++){
        cout<<foods[i]<<endl;
    }

    return 0;
}