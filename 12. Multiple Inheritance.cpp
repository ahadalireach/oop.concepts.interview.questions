#include <iostream>
#include <iomanip>

using namespace std;

// Base class for GPA
class GPA {
protected:
    double gpa;

public:
    GPA(double grade) : gpa(grade) {}
    virtual ~GPA() {} // Virtual destructor for proper cleanup
};

// Base class for Credit Hours
class CreditHours {
protected:
    int creditHours;

public:
    CreditHours(int hours) : creditHours(hours) {}
    virtual ~CreditHours() {}
};

// Base class for Attendance
class Attendance {
protected:
    double attendance;

public:
    Attendance(double percent) : attendance(percent) {}
    virtual ~Attendance() {}
};

// Student class using virtual inheritance to avoid diamond problem
class Student : public virtual GPA, public virtual CreditHours, public virtual Attendance {
public:
    Student(double grade, int hours, double percent)
        : GPA(grade), CreditHours(hours), Attendance(percent) {}

    double calculateGradePoints() {
        double gradePoints = gpa * creditHours;
        if (attendance > 80.0) {
            gradePoints += 5.0;
        }
        return gradePoints;
    }
};

int main() {
    double gpa, attendance;
    int creditHours;

    // User input for GPA, Credit Hours, and Attendance percentage
    cout << "Enter GPA, Credit Hours, and Attendance (%): ";
    cin >> gpa >> creditHours >> attendance;

    // Creating Student object
    Student patrick(gpa, creditHours, attendance);

    // Display the calculated grade points
    cout << fixed << setprecision(1) << "Final Grade Points: "
         << patrick.calculateGradePoints() << endl;
}
