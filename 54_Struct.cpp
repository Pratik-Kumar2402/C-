#include<iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled = true;
};


int main(){
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;


    cout<< student1.name<<endl;
    cout<< student1.gpa<<endl;
    cout<< student1.enrolled<<endl;

    cout<< student2.name<<endl;
    cout<< student2.gpa<<endl;
}