#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Circle
class Circle {
protected:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Pure virtual function for calculating circumference
    virtual double calculateCircumference() const = 0;
};

// Derived class: Using accurate circumference formula
class AccurateCircumference : public Circle {
public:
    AccurateCircumference(double r) : Circle(r) {}

    double calculateCircumference() const override {
        return 2 * 3.14159 * radius; // Correct formula: 2πr
    }
};

// Derived class: Using an arbitrary formula for demonstration
class ApproximateCircumference : public Circle {
public:
    ApproximateCircumference(double r) : Circle(r) {}

    double calculateCircumference() const override {
        return 23.14 * radius; // Incorrect formula (for comparison)
    }
};

int main() {
    double radius;

    // Taking input
    cout << "Enter the radius: ";
    cin >> radius;

    // Creating objects
    AccurateCircumference obj1(radius);
    ApproximateCircumference obj2(radius);

    // Displaying results
    cout << fixed << setprecision(2);
    cout << "Accurate Circumference: " << obj1.calculateCircumference() << endl;
    cout << "Approximate Circumference: " << obj2.calculateCircumference() << endl;
}
