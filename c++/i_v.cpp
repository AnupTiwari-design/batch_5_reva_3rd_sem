#include<iostream>

using namespace std;

class variable{
    public:
    string name;//instance v ariable
    int age;
    int marks;
    void display(){
        cout<<"Name "<<name<<" "<< "Age:"<<age<<" "<<"Marks:"<<marks<<endl;

    }

};
int main(){
    variable ob;
    ob.name="Anup";
    ob.age=23;
    ob.marks=333;
    ob.display();
    return 0;
}