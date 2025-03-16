//! ====================== Diamond Problem

/*
          Employee
         /        \
      Manager   Developer
         \        /
       TechLead  ❌ (Diamond Problem)
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee() { cout << "Employee constructor called.\n"; }
    void work() { cout << "Employee is working.\n"; }
};

class Manager : public Employee
{
public:
    Manager() { cout << "Manager constructor called.\n"; }
};

class Developer : public Employee
{
public:
    Developer() { cout << "Developer constructor called.\n"; }
};

class TechLead : public Manager, public Developer
{
public:
    TechLead() { cout << "TechLead constructor called.\n"; }
};

int main()
{
    TechLead lead;
    // ❌ ERROR: Ambiguity - Compiler does not know which "work()" to call.
    // lead.work();
}

//! ====================== Resolved Diamond Problem

/*
         Employee
        /       \
  Manager (V)  Developer (V)
        \       /
       TechLead ✅ (Fixed)
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee() { cout << "Employee constructor called.\n"; }
    void work() { cout << "Employee is working.\n"; }
};

// Using virtual inheritance to avoid duplicate instances
class Manager : virtual public Employee
{
public:
    Manager() { cout << "Manager constructor called.\n"; }
};

class Developer : virtual public Employee
{
public:
    Developer() { cout << "Developer constructor called.\n"; }
};

class TechLead : public Manager, public Developer
{
public:
    TechLead() { cout << "TechLead constructor called.\n"; }
};

int main()
{
    TechLead lead;
    lead.work(); // ✅ No ambiguity due to virtual inheritance
}

// We add virtual before public Employee in Manager and Developer.
// Now, TechLead has only one instance of Employee.
// The ambiguity in calling work() is resolved.
