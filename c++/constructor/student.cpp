#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    float marks;
    student(string n,int a,float m){//parametrized constructor
        name=n;
        age=a;
        marks=m;

    }
    void display(){
        cout<<"Name "<<name<<" "<< "Age:"<<age<<" "<<"Marks:"<<marks<<endl;
    }
};
int main(){
    student ob("Anup",25,33.8);
    ob.display();

}