#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"call from parent calss \n";
    }

};

class child:public parent{
    public:
    void print(){
        cout<<"call from child class \n";
    }

};
int main(){
    child c;
    c.print();
    c.display();

    return 0;
}
