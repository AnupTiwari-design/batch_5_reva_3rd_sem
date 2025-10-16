#include <iostream>
using namespace std;
class Parent {
public:
    void show() {
        cout << "This is the parent class." << endl;
    }
};
class Child : public Parent {
public:
    void show(){  // 'override' ensures this function overrides the base class version
        cout << "This is the child class." << endl;
    }
};

int main() {
    Parent p;
    Child c;

    p.show();  // Calls Parent's show()
    c.show();  // Calls Child's overridden show()

    return 0;
}