#include <iostream>
using namespace std;

class Circle {
    public:
    float radius; // data member
    // Parameterized constructor
    Circle(float radius) {
        this->radius = radius;
    }
    // Function to calculate area
    float area() {
        return 3.14 * radius * radius;
    }

    // Function to display radius and area
    void display() {
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area() << endl;
    }
};

int main() {
    float r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle c(r);  // Object creation and constructor call
    c.display();  // Display radius and area

    return 0;
}