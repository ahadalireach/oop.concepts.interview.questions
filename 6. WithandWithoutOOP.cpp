// Without OOP - Procedural Approach

#include <iostream>
using namespace std;

// Global variable for balance
int balance = 0;

// Function to deposit money
void deposit(int amount) {
    balance += amount;
    cout << "Deposit successful." << endl;
}

// Function to withdraw money
void withdraw(int amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful." << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}

// Function to display balance
void displayBalance() {
    cout << "Current Balance: " << balance << endl;
}

int main() {
    while (true) {
        int choice;
        cin >> choice;

        if (choice == 1) {
            int amount;
            cin >> amount;
            deposit(amount);
        }
        else if (choice == 2) {
            int amount;
            cin >> amount;
            withdraw(amount);
        }
        else if (choice == 3) {
            displayBalance();
        }
        else if (choice == 4) {
            cout << "Exiting program." << endl;
            break;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }
}

// ⚠ Problems in Procedural Approach

// Global balance variable - Risk of accidental modification.
// Lack of data encapsulation - No protection against invalid operations.
// No scalability - Difficult to extend for multiple accounts.
// Functions are not tied to any object - No real-world representation

// With OOP - Object-Oriented Approach

#include <iostream>

class BankAccount {
private:
    int balance;

public:
    BankAccount() : balance(0) {}

    void deposit(int amount) {
        balance += amount;
        std::cout << "Deposit successful." << std::endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful." << std::endl;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Current Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account; // Creating an account object

    while (true) {
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            int amount;
            std::cin >> amount;
            account.deposit(amount);
        }
        else if (choice == 2) {
            int amount;
            std::cin >> amount;
            account.withdraw(amount);
        }
        else if (choice == 3) {
            account.displayBalance();
        }
        else if (choice == 4) {
            std::cout << "Exiting program." << std::endl;
            break;
        }
        else {
            std::cout << "Invalid choice." << std::endl;
        }
    }
}

/*
✅ Why OOP is Better?

Feature          | Without OOP (Procedural) ❌             | With OOP ✅
----------------------------------------------------------------------
Encapsulation    | No data protection. Anyone can modify | `balance` is private, preventing accidental modifications.
                | `balance`.                            |
----------------------------------------------------------------------
Modularity       | Functions are independent. Hard      | Code is inside a class, making it easier to maintain.
                | to manage.                           |
----------------------------------------------------------------------
Scalability      | Cannot handle multiple accounts      | Can create multiple objects for multiple accounts.
                | separately.                          |
----------------------------------------------------------------------
Data Integrity   | No checks on data.                  | Encapsulation ensures proper access.
----------------------------------------------------------------------
*/
