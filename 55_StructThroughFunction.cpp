#include<iostream>
using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");

    printCar(car1);

    return 0;
}

void printCar(Car &car){
    cout<<car.model<<endl;
    cout<<car.year<<endl;
    cout<<car.color<<endl;
}

void paintCar(Car &car, string color){
    car.color = color;
}