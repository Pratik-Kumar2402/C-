#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1,string topping2);

int main(){
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    cout<<"here is your pizza!"<<endl;
}

void bakePizza(string topping1){
    cout<<"here is you "<<topping1<<" pizza!"<<endl;
}

void bakePizza(string topping1,string topping2){
    cout<<"here is you "<<topping1<<" and "<<topping2<<" pizza!"<<endl;
}