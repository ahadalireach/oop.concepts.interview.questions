#include <iostream>

class Parent {
public:
    void calculateSumOfDigitPairs(int num) {
        int digits[10]; // Array to store digits of the number
        int count = 0, sum = 0;

        // Extract digits from the number and store them in reverse order
        while (num > 0) {
            digits[count++] = num % 10;
            num /= 10;
        }

        // Calculate sum of all possible digit pairs
        for (int i = 0; i < count; ++i) {
            for (int j = i + 1; j < count; ++j) {
                sum += digits[i] + digits[j];
            }
        }

        // Display the final sum
        std::cout << "Sum of all digit pairs: " << sum << std::endl;
    }
};

class Child : public Parent {
public:
    void displayDigitPairSum(int num) {
        std::cout << "Processing number: " << num << std::endl;
        calculateSumOfDigitPairs(num); // Calling Parent class method
    }
};

int main() {
    int num;

    // Taking user input
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Creating object of Child class
    Child child;
    child.displayDigitPairSum(num);

    return 0;
}
