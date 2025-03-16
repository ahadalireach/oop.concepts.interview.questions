#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Base class: Product
class Product {
protected:
    string name;
    double price;
    int quantity;

public:
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}

    virtual double calculateCost() const {
        return price * quantity;
    }

    virtual ~Product() {} // Virtual destructor for proper cleanup
};

// Derived class: Electronics (Inherits virtually to avoid ambiguity)
class Electronics : virtual public Product {
public:
    Electronics(const string& name, double price, int quantity)
        : Product(name, price, quantity) {}

    double calculateCost() const override {
        return (quantity >= 3) ? Product::calculateCost() * 0.9 : Product::calculateCost();
    }
};

// Derived class: Clothing (Inherits virtually to avoid ambiguity)
class Clothing : virtual public Product {
public:
    Clothing(const string& name, double price, int quantity)
        : Product(name, price, quantity) {}

    double calculateCost() const override {
        return (quantity >= 5) ? Product::calculateCost() * 0.95 : Product::calculateCost();
    }
};

// Final Class: OrderCalculator (Inheriting from both Electronics and Clothing)
class OrderCalculator : public Electronics, public Clothing {
public:
    OrderCalculator(const string& electronicName, double electronicPrice, int electronicQuantity,
                    const string& clothName, double clothPrice, int clothQuantity)
        : Product("", 0, 0), // Needed to resolve ambiguity in virtual inheritance
          Electronics(electronicName, electronicPrice, electronicQuantity),
          Clothing(clothName, clothPrice, clothQuantity) {}

    double calculateTotalCost() const {
        return Electronics::calculateCost() + Clothing::calculateCost();
    }
};

int main() {
    string electronicName, clothName;
    double electronicPrice, clothPrice;
    int electronicQuantity, clothQuantity;

    // Input
    cout << "Enter electronic product details (Name Price Quantity): ";
    cin >> electronicName >> electronicPrice >> electronicQuantity;

    cout << "Enter clothing product details (Name Price Quantity): ";
    cin >> clothName >> clothPrice >> clothQuantity;

    // Creating order object
    OrderCalculator order(electronicName, electronicPrice, electronicQuantity, clothName, clothPrice, clothQuantity);

    // Displaying result
    cout << "Total Order Cost: $" << fixed << setprecision(2) << order.calculateTotalCost() << endl;
}
