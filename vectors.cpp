#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v; // defining a vector(dynamic array)

    v.push_back(1); // to add an element to the array
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){  // iterating through vector
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;      // iterating through vector
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    for(auto element:v){       // iterating through vector
        cout<<element<<endl;
    }

    v.pop_back();

    return 0;
}