#include <iostream>
using namespace std;

// Base class: Shape
class Shape {
protected:
    int length;
    int breadth;

public:
    Shape(int l, int b) : length(l), breadth(b) {}

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    Rectangle(int l, int b) : Shape(l, b) {}

    void display() {
        cout << "Rectangle Area: " << area() << endl;
        cout << "Rectangle Perimeter: " << perimeter() << endl;
    }
};

// Derived class: Square (inherits Shape)
class Square : public Shape {
public:
    Square(int side) : Shape(side, side) {}

    void display() {
        cout << "Square Area: " << area() << endl;
        cout << "Square Perimeter: " << perimeter() << endl;
    }
};

int main() {
    int l, b, s;

    // Taking input
    cout << "Enter length and breadth of Rectangle: ";
    cin >> l >> b;
    cout << "Enter side of Square: ";
    cin >> s;

    // Creating objects
    Rectangle rect(l, b);
    Square sq(s);

    // Display results
    rect.display();
    sq.display();
}
