# C++ Info + Interview Questions

<a id="table-of-contents"></a>

| No. | Questions                                                                                                                                                                   |
| --- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | [What is Programming & Why C++?](#what-is-programming--why-c)                                                                                                               |
| 2   | [What is a Programming Paradigm?](#what-is-a-programming-paradigm)                                                                                                          |
| 3   | [What is the Difference Between C++ and C?](#what-is-the-difference-between-c-and-c)                                                                                        |
| 4   | [Files Structure in C++](#files-structure-in-c)                                                                                                                             |
| 5   | [What do Low Level and High Level Mean?](#what-do-low-level-and-high-level-mean)                                                                                            |
| 6   | [What are Variables and Comments?](#what-are-variables-and-comments)                                                                                                        |
| 7   | [Variable Scope](#variable-scope)                                                                                                                                           |
| 8   | [What are Data Types?](#what-are-data-types)                                                                                                                                |
| 9   | [What are Reserved Keywords in C++?](#what-are-reserved-keywords-in-c)                                                                                                      |
| 10  | [What are Operators and Their Different Types in C++?](#what-are-operators-and-their-different-types-in-c)                                                                  |
| 11  | [What are Built-in Data Types in C++?](#what-are-built-in-data-types-in-c)                                                                                                  |
| 12  | [What is the Difference Between `float`, `double`, and `long double` Literals?](#what-is-the-difference-between-float-double-and-long-double-literals)                      |
| 13  | [What is Typecasting in C++?](#what-is-typecasting-in-c)                                                                                                                    |
| 14  | [How Do You Use the Scope Resolution Operator in C++?](#how-do-you-use-the-scope-resolution-operator-in-c)                                                                  |
| 15  | [What are Constants, Manipulators, and Operator Precedence in C++?](#what-are-constants-manipulators-and-operator-precedence-in-c)                                          |
| 16  | [What are Control Structures in C++?](#what-are-control-structures-in-c)                                                                                                    |
| 17  | [What are the Differences Between For, While, and Do-While Loops in C++?](#what-are-the-differences-between-for-while-and-do-while-loops-in-c)                              |
| 18  | [What is the Difference Between the Break and Continue Statements in C++?](#what-is-the-difference-between-the-break-and-continue-statements-in-c)                          |
| 19  | [What is a Pointer and How is it Used?](#what-is-a-pointer-and-how-is-it-used)                                                                                              |
| 20  | [What is an Array, and How are Arrays and Pointers Related in C++?](#what-is-an-array-and-how-are-arrays-and-pointers-related-in-c)                                         |
| 21  | [What are Struct, Union, and Enums in C++?](#what-are-struct-union-and-enums-in-c)                                                                                          |
| 22  | [What are Function and Function Prototypes in C++?](#what-are-function-and-function-prototypes-in-c)                                                                        |
| 23  | [What are Actual and Formal Parameters?](#what-are-actual-and-formal-parameters)                                                                                            |
| 24  | [What Does it Mean by Call by Value, Call by Reference, & Call by Pointer in C++?](#what-does-it-mean-by-call-by-value-call-by-reference--call-by-pointer-in-c)             |
| 25  | [What Does it Mean by Inline Functions, Default Arguments, & Constant Arguments in C++?](#what-does-it-mean-by-inline-functions-default-arguments--constant-arguments-in-c) |
| 26  | [Recursion and Recursive Function in C++?](#recursion-and-recursive-function-in-c)                                                                                          |
| 27  | [What is Function Overloading?](#what-is-function-overloading)                                                                                                              |

---

---

## Q. What is Programming & Why C++?

**Programming**

Programming is the process of creating a set of instructions that tell a computer how to perform specific tasks. It translates human ideas into a form that machines can understand.

**Why C++?**

C++ was created by Bjarne Stroustrup in 1979 and is valued for:

- **Proximity to Hardware**: It provides low-level access to memory and hardware, allowing for efficient memory management and faster execution.
- **Performance**: Used in performance-critical applications such as system software, game development, and real-time systems because it offers fine control over system resources.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What is a Programming Paradigm?

A **programming paradigm** is a style or approach to programming. Some common paradigms are:

- **Imperative Programming**

  - Focuses on **how** to perform tasks by changing the program's state through statements.
  - Example:

    ```cpp
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    ```

- **Object-Oriented Programming (OOP)**

  - Focuses on using objects and classes to structure programs.

- **Procedural Programming**

  - Breaks down tasks into procedures (functions), emphasizing reusable code.
  - A subset of imperative programming.

- **Functional Programming**

  - Focuses on **what** to do rather than **how** to do it. It treats computation as the evaluation of mathematical functions.
  - Example:

    ```cpp
    auto square = [](int x) { return x * x; };
    std::cout << square(5);  // Output: 25
    ```

- **Declarative Programming**

  - Focuses on **what** needs to be done, not how. It often involves querying data.
  - Example:

    ```sql
    SELECT name FROM students WHERE grade > 90;
    ```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What is the Difference Between C++ and C?

- **C++** is an extension of **C**, providing additional features like **Object-Oriented Programming (OOP)**, **overloading**, and **templates**.
- **C** is procedural, while **C++** supports both procedural and object-oriented programming.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. Files Structure in C++

In C++, the organization of files is crucial for managing and structuring code effectively:

- **Header Files** (`.h` or `.hpp`): These files contain declarations for functions, classes, and other identifiers. `#include<iostream>` includes the standard library for input and output operations. Header files promote code reuse and modularity by allowing shared declarations across multiple source files.

- **Source Files** (`.cpp`): These files contain the definitions of the functions and classes declared in header files. They provide the implementation details and include the necessary header files.

- **Main Function**: The entry point of a C++ program is the `main` function, where the execution of the program begins.

Overall, a typical C++ program consists of:

- Header files for declarations
- Source files for definitions
- The `main` function to start execution

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What do Low Level and High Level Mean?

**High Level**: Imagine using Google to search for something. You don’t need to understand how Google works behind the scenes, you just type your query and get results easily. High-level programming languages are like this – they’re designed to be easy to use and understand, without worrying about how everything works under the hood.

**Low Level**: This is like looking at the inside of a computer. Instead of just asking Google a question, you’d need to understand the detailed processes inside Google’s system. Low-level languages work closer to the machine and require a better understanding of how things work on the hardware.

In short, **high-level** is easy to use and understand, while **low-level** gives you more control but is more complex.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Variables and Comments?

**Variables**: Think of variables as labeled boxes where you can store information. If you have a box labeled `age`, you can put a number in it to represent someone's age. Variables can hold different types of data, like numbers (`int`), decimal values (`float`), or characters (`char`).

**Comments**: Comments are like sticky notes you put in your code to explain what’s happening. They don’t affect how the program runs—they’re just there for anyone reading the code to understand it better. You might write a comment to explain why a certain piece of code is there or what a variable is used for.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. Variable Scope

The scope of a variable defines where in the code you can use it. You can think of it like this: if you’re in a specific room, you can only use the items in that room. Similarly, a variable's scope determines where it can be accessed in your program.

- **Local Variables**: These are variables declared inside a function. They can only be used within that function. Just like a key you only use in one room, local variables are only usable where they're defined.

- **Global Variables**: These are declared outside of any function and can be used anywhere in your code. Like a master key that opens all rooms, global variables are accessible from any part of the program.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Data Types?

Data types specify the kind of data a variable can hold. They tell the program what type of information to store and how to handle it.

In C++, data types are divided into three main groups:

- **Built-in Data Types**: These are the basic types provided by C++.

  - `int`: Stores whole numbers, like 5 or -3.
  - `float`: Stores numbers with decimals, like 3.14 or -0.001.
  - `char`: Stores single characters, like 'a' or 'Z'.
  - `double`: Similar to `float`, but it can store larger or more precise decimal numbers.
  - `bool`: Stores `true` or `false` values.

- **User-Defined Data Types**: These allow you to create custom data types.

  - `struct`: Groups different types of data together under one name, like a record containing a name, age, and address.
  - `union`: Stores different types of data, but only one at a time.
  - `enum`: Defines a set of named values, making code easier to read, like days of the week or colors.

- **Derived Data Types**: These are based on the basic types.

  - `array`: A collection of items of the same type, like a list of numbers.
  - `pointer`: Stores the address of another variable, which helps manage memory efficiently.
  - `function`: A block of code that performs a specific task and can be used multiple times.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Reserved Keywords in C++?

Reserved keywords are special words that C++ uses for specific purposes. They are part of the language's rules and help the program do things like defining variables, controlling the flow, and more.

You **cannot** use reserved keywords as names for your variables, functions, or other identifiers. If you try to do this, your code will give a compile-time error.

- **`int`**: Used to define integer variables.
- **`float`**: Used to define floating-point numbers (numbers with decimals).
- **`if`**: Used to check conditions (for conditional statements).
- **`while`**: Used for loops that repeat actions.
- **`return`**: Used to return a value from a function.

- **`<<`**: The insertion operator, used for output in streams (like printing to the screen).
- **`>>`**: The extraction operator, used for input in streams (like reading input from the user).

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Operators and Their Different Types in C++?

Operators are symbols in C++ that perform operations on variables and values, such as calculations, comparisons, and logical operations. Below are the different types of operators:

1. **Arithmetic Operators**:
   These are used for basic mathematical operations.

- `+` : Addition (e.g., `a + b` adds `a` and `b`)
- `-` : Subtraction (e.g., `a - b` subtracts `b` from `a`)
- `*` : Multiplication (e.g., `a * b` multiplies `a` by `b`)
- `/` : Division (e.g., `a / b` divides `a` by `b`)
- `%` : Modulus (e.g., `a % b` gives the remainder of `a` divided by `b`)
- `++` : Increment (e.g., `a++` increases `a` by 1)
- `--` : Decrement (e.g., `a--` decreases `a` by 1)

2. **Assignment Operators**:
   These operators are used to assign values to variables.

- `=` : Basic assignment (e.g., `a = 10` assigns `10` to `a`)
- `+=` : Add and assign (e.g., `a += 5` is equivalent to `a = a + 5`)
- `-=` : Subtract and assign (e.g., `a -= 3` is equivalent to `a = a - 3`)
- `*=` : Multiply and assign (e.g., `a *= 2` is equivalent to `a = a * 2`)
- `/=` : Divide and assign (e.g., `a /= 4` is equivalent to `a = a / 4`)
- `%=` : Modulus and assign (e.g., `a %= 3` is equivalent to `a = a % 3`)

3. **Comparison Operators**:
   These operators are used to compare two values and return a boolean result.

- `==` : Equal to (e.g., `a == b` checks if `a` is equal to `b`)
- `!=` : Not equal to (e.g., `a != b` checks if `a` is not equal to `b`)
- `>` : Greater than (e.g., `a > b` checks if `a` is greater than `b`)
- `<` : Less than (e.g., `a < b` checks if `a` is less than `b`)
- `>=` : Greater than or equal to (e.g., `a >= b` checks if `a` is greater than or equal to `b`)
- `<=` : Less than or equal to (e.g., `a <= b` checks if `a` is less than or equal to `b`)

4. **Logical Operators**:
   These operators are used to combine or invert boolean expressions.

- `&&` : Logical AND (e.g., `(a == b) && (a > c)` is true if both conditions are true)
- `||` : Logical OR (e.g., `(a == b) || (a > c)` is true if at least one condition is true)
- `!` : Logical NOT (e.g., `!(a == b)` is true if the condition is false)

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Built-in Data Types in C++?

Built-in data types in C++ are predefined types that are fundamental for storing data in a program. These data types are part of the C++ language and are used to store simple types of data.

- **`int`**: Stores integer values (e.g., `1`, `-10`, `42`).
- **`float`**: Stores single-precision floating-point numbers (e.g., `3.14`, `-0.001`).
- **`char`**: Stores single characters (e.g., `'a'`, `'1'`, `'$'`).
- **`double`**: Stores double-precision floating-point numbers (e.g., `3.1415926535`).
- **`bool`**: Stores boolean values, which are either `true` or `false`.

**[⬆ Back to Top](#table-of-contents)**

---

# Q. What is the Difference Between `float`, `double`, and `long double` Literals?

**`float`**:

- **Precision**: Holds single-precision floating-point numbers.
- **Memory**: Typically takes up 4 bytes.
- **Use case**: Ideal for storing numbers that do not require high precision.
- **Example**: `3.14f` is a `float` literal (the `f` suffix indicates it's a `float`).

**`double`**:

- **Precision**: Holds double-precision floating-point numbers, providing more accuracy than `float`.
- **Memory**: Typically takes up 8 bytes.
- **Use case**: Best for calculations requiring higher precision.
- **Example**: `3.14159265358979` is a `double` literal (by default, floating-point literals like `3.14` are treated as `double`).

**`long double`**:

- **Precision**: Holds extended-precision floating-point numbers, offering even more precision and a larger range than `double`.
- **Memory**: Typically uses 12 or 16 bytes, depending on the system.
- **Use case**: Useful for high-precision calculations, especially in scientific computations.
- **Example**: `3.14159265358979323846L` (the `L` suffix indicates a `long double`).

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What is Typecasting in C++?

Typecasting is the process of converting a variable from one data type to another. This is useful when you need to perform operations that require specific data types or when you want to ensure compatibility between different data types.

In C++, you can perform typecasting using different syntax:

- **C-style cast**: `(float)a` - This converts the variable `a` to a `float`.
- **Functional cast**: `float(a)` - This is another way to convert `a` to a `float`.

Typecasting helps in performing precise operations, especially when dealing with mixed data types.

**[⬆ Back to Top](#table-of-contents)**

---

## Q. How Do You Use the Scope Resolution Operator in C++?

The scope resolution operator `::` is used to access global variables or functions from within a function or class where there might be local variables or functions with the same name. It helps in distinguishing between different scopes.

- To access a global variable or function from within a class or function, you use `::` to specify the global scope.

```cpp
int value = 10; // Global variable

class Example {
public:
    int value; // Local variable

    void show() {
        std::cout << "Local value: " << value << std::endl;
        std::cout << "Global value: " << ::value << std::endl; // Access global variable
    }
};

int main() {
    Example obj;
    obj.show();
}
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are constants, manipulators, and operator precedence in C++?

- **Constants**
  Constants are unchangeable; once a constant variable is initialized in a program, its value cannot be changed afterwards.

  ```cpp
  const int MAX = 100;
  // MAX = 200; // This would cause a compile-time error because MAX is a constant
  ```

- **Manipulators**
  Manipulators are used for formatting output:

  - `endl`: Moves to the next line.
  - `setw`: Specifies the width of the output.

  ```cpp
  #include <iostream>
  #include <iomanip>  // For setw
  int main() {
  std::cout << "Hello";
  std::cout << std::endl; // Moves to the next line
  std::cout << std::setw(10) << 123 << std::endl; // Sets width for output
  }
  ```

- **Operator Precedence & Operator Associativity**

  - **Operator Precedence**
    Determines the order of operations in an expression. In `int c = a * b + c`, multiplication (`*`) has higher precedence than addition (`+`).

    ```cpp
    int a = 5, b = 10, c = 15;
    int result = a * b + c; // result = 50 + 15 = 65
    ```

  - **Operator Associativity**
    Resolves the order of operations when operators have the same precedence. Associativity can be "left-to-right" (left associative) or "right-to-left" (right associative). For instance, in the expression `a - b - c`, subtraction is left associative, so it's evaluated as `(a - b) - c`.

    ```cpp
    int a = 10, b = 5, c = 3;
    int result = a - b - c; // result = (10 - 5) - 3 = 5 - 3 = 2
    ```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Control Structures in C++?

Control structures in C++ manage the flow of execution within a program. They allow you to make decisions, repeat actions, and control the execution path based on certain conditions.

- **Sequence Structure**
  Executes instructions sequentially, one after another.

  ```cpp
  int a = 5;
  int b = 10;
  int sum = a + b;
  std::cout << "Sum: " << sum << std::endl;
  ```

- **Selection Structure**
  Chooses instructions based on conditions.

  - Implemented using if-else statements or switch-case statements.

    ```cpp
    int a = 5;
    if (a > 0) {
    std::cout << "Positive number" << std::endl;
    } else {
    std::cout << "Non-positive number" << std::endl;
    }
    ```

    ```cpp
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        default:
            std::cout << "Weekend" << std::endl;
    }
    ```

- **Loop Structure**
  Repeats instructions until a condition becomes false.

  ```cpp
  int i = 0;
  while (i < 5) {
      std::cout << i << std::endl;
      i++;
  }
  ```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are the differences between for, while, and do-while loops in C++?

1. For Loop

- Ideal for situations where the number of iterations is known beforehand.

  ```cpp
  for (initialization; condition; increment/decrement) {
      // code to be executed
  }
  ```

2. While Loop

- Useful when the number of iterations is not known and depends on a condition being met.

  ```cpp
  while (condition) {
      // code to be executed
  }
  ```

3. Do-While Loop

- Similar to the while loop, but the condition is evaluated after the code block executes, ensuring that the loop body is executed at least once.

  ```cpp
  do {
      // code to be executed
  } while (condition);
  ```

## **[⬆ Back to Top](#table-of-contents)**

---

## Q. What is the difference between the break and continue statements in C++?

1. Break Statement

- Terminates the loop entirely.

  ```cpp
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          break; // Exits the loop when i is 5
      }
      std::cout << i << " ";
  }
  ```

2. Continue Statement

- Skips the current iteration of the loop and proceeds with the next iteration.

  ```cpp
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          continue; // Skips the rest of the loop body when i is 5
      }
      cout << i << " ";
  }
  ```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What is a pointer and how is it used?

A pointer is a data type that holds the address of another data type. The `&` operator is called the "address of" operator, and the `*` operator is called the "dereference" operator.

```cpp
// Define a variable and a pointer to it
int a = 3;
int* b = &a; // Pointer b holds the address of a

// Display the address and value of a using pointer b
std::cout << "The address of a is " << &a << std::endl;
std::cout << "The address of a is " << b << std::endl;
std::cout << "The value at address b is " << *b << std::endl;
```

**Benefits:**

1. Dynamic Memory Allocation

Pointers are used to allocate and deallocate memory dynamically.

```cpp
void dynamicMemoryAllocation() {
    int* ptr = new int; // Allocating memory dynamically
    *ptr = 42;          // Assigning a value
    cout << "Dynamic Memory Allocation: " << *ptr << endl;
    delete ptr;         // Deallocating memory
}
```

2. Container Access

Pointers can point to arrays, structs, or other containers, and can pass the address of these containers to functions.

```cpp
void containerAccess(int* arr, int size) {
    std::cout << "Container Access: ";
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " "; // Accessing array elements using a pointer
    }
    std::cout << std::endl;
}
```

3. Return Multiple Values

Pointers can be used to return multiple values from a function.

```cpp
void returnMultipleValues(int a, int b, int* sum, int* product) {
    *sum = a + b;          // Assigning sum to the pointer
    *product = a * b;      // Assigning product to the pointer
}
```

**Pointer to Pointer**

A pointer to pointer is a variable that stores the address of another pointer. In simple terms, it’s a pointer that points to another pointer, which in turn points to a value.

```cpp
int a = 5;          // A normal variable
int* ptr = &a;      // A pointer that stores the address of 'a'
int** ptr2 = &ptr;  // A pointer to pointer, it stores the address of 'ptr'

// Printing the value of 'a' through ptr and ptr2
cout << "Value of a: " << a << endl;      // Direct value of 'a'
cout << "Value of a through ptr: " << *ptr << endl;  // Dereferencing ptr to get 'a'
cout << "Value of a through ptr2: " << **ptr2 << endl; // Dereferencing ptr2 twice to get 'a'
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What is an array, and how are arrays and pointers related in C++?

An **array** is a collection of similar items (like numbers) stored next to each other in memory.

**Arrays and Pointers**

- **Array Name as a Pointer**: In C++, the name of an array acts as a pointer to the first element of the array. This means the array name itself holds the memory address of the first item in the array.

  - If you have an array called `marks[]`, `marks` points to the first element.
  - You **should not** use `&marks` as it gives the address of the whole array, not the first element.

```cpp
int marks[] = {23, 45, 56, 89}; // Array with 4 integers

// Pointer pointing to the first element of the array
int* p = marks;

// Loop through the array using pointer arithmetic
for (int i = 0; i < 4; i++) {
    cout << *(p + i) << " ";  // Accessing each element using pointer
}

// Additional pointer arithmetic examples (commented out)
cout << *(p++) << endl;
cout << *(++p) << endl;
cout << "The value of *p is " << *p << endl;
cout << "The value of *(p+1) is " << *(p+1) << endl;
cout << "The value of *(p+2) is " << *(p+2) << endl;
cout << "The value of *(p+3) is " << *(p+3) << endl;
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Struct, Union, and Enums in C++?

1. Struct

A **struct** is a user-defined data type in C++ that allows you to group different types of data together. It is similar to an array, but unlike arrays which store data of the same type, a struct can store data of multiple types.

```cpp
struct employee {
    int eId;       // Employee ID
    char favChar;  // Favorite character
    int salary;    // Salary
};

int main() {
    employee Chilli; // Creating an instance of the struct
    // Access struct members
    Chilli.eId = 1;
    Chilli.favChar = 'H';
    Chilli.salary = 50000;
}
```

2. Union

A `union` is similar to a struct, but it provides better memory management. All members of a union share the same memory location, so only one member can be used at a time.

```cpp
union money {
    int rice;     // Amount of rice
    char car;     // Car type
    float pounds; // Pounds of something
};

int main() {
    money m1;
    m1.rice = 34;  // Assigning value to rice
    cout << m1.rice; // Output the value of rice
}
```

3. Enum

An `enum` (enumeration) is a user-defined data type that consists of named constants representing integral values. It makes programs more readable and manageable by defining a set of named values.

```cpp
enum Meal {
    breakfast, // 0
    lunch,     // 1
    dinner     // 2
};

int main() {
    Meal m1 = dinner; // Setting enum value
    if (m1 == 2) {
        cout << "The value of dinner is " << dinner << endl; // Output value of dinner
    }
}
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Function and Function Prototypes in C++?

1. Function

A **function** is a block of code designed to perform a specific task. Functions help make the code reusable, easier to manage, and easier to debug. By breaking the code into smaller, manageable pieces, functions also facilitate top-down structured programming.

```cpp
// Function to add two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3); // Call the function
    cout << "Sum is: " << result << endl;
}
```

2. Function Prototypes

A function prototype is a declaration of a function that tells the compiler about the function's name, return type, and parameters before the function's full implementation. This is especially useful when the function is called before its definition.

```cpp
// Function prototype
int sum(int a, int b); // Acceptable

// Incorrect prototypes
int sum(int a, b);    // Not acceptable
int sum(int, int);    // Acceptable but less descriptive
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What are Actual and Formal Parameters?

1. Formal Parameters

**Formal parameters** are the variables that are declared in a function's definition. They act as placeholders for the data that will be passed to the function when it is called. Formal parameters only exist inside the function.

2. Actual Parameters

Actual parameters are the real values or variables that are passed to a function when it is called. They provide the function with the specific data it needs to work with.

```cpp
// Function definition with formal parameters 'a' and 'b'
void add(int a, int b) {
    cout << "Sum is: " << a + b << endl; // 'a' and 'b' are formal parameters
}

int main() {
    int num1 = 5, num2 = 3;
    add(num1, num2); // num1 and num2 are actual parameters
    return 0;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What does it mean by Call by Value, Call by Reference, & Call by Pointer in C++?

1. Call by Value

**Call by Value** means passing a copy of the actual parameters to the function. Any changes made to the parameters inside the function **do not affect** the original values.

```cpp
int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y); // This will not swap x and y
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
```

2. Call by Pointer

**Call by Pointer** means passing the **memory address** (pointer) of the actual parameters to the function. Changes made inside the function will affect the original values.
Example:

```cpp
// Call by pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y); // This will swap x and y using pointer reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
```

3. Call by Reference

**Call by Reference** means passing a **reference** (alias) to the actual parameters. Changes made inside the function will affect the original values.

```cpp
// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y); // This will swap x and y using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. What does it mean by Inline Functions, Default Arguments, & Constant Arguments in C++?

1. Inline Functions

**Inline functions** are used to reduce the overhead of function calls. When a function is called multiple times in a program, it can increase execution time. By using inline functions, the compiler replaces the function call with the function code itself, which can improve performance for small functions. However, inline functions are not recommended if they use static variables, as this can lead to inefficiency.

```cpp
inline int product(int a, int b){
    return a * b;
}

int main(){
    int a = 5, b = 10;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
}
```

2. Default Arguments

**Default arguments** allow functions to be called with fewer arguments than they are defined to accept. If an argument is not provided, the default value is used. Default arguments should be specified after all other arguments in the function definition.

```cpp
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive "
         << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive "
         << moneyReceived(money, 1.1) << " Rs after 1 year" << endl;
}
```

3. Constant Arguments

**Constant arguments** are used to prevent a function from modifying the values of its arguments. This is useful for ensuring that data passed to a function remains unchanged.

```cpp
int strlen(const char *p){
    // Function implementation here
}

int main(){
    const char *str = "Hello, World!";
    cout << "The length of the string is " << strlen(str) << endl;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

## Q. Recursion and Recursive Function in C++?

**Recursion** occurs when a function calls itself, either directly or indirectly. A function that performs this self-calling is known as a **recursive function**. Recursive functions typically have two main components:

1. **Base Case**: This is the condition under which the recursion stops. Without a base case, the function would continue calling itself indefinitely, leading to infinite recursion.
2. **Recursive Case**: This is the part of the function where the recursion occurs. It typically involves a function calling itself with modified arguments.

```cpp
// Recursive function to calculate factorial
int factorial(int n){
    if (n <= 1){
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main(){
    int number = 5;
    cout << "The factorial of " << number << " is " << factorial(number) << endl;
}
```

## Q. What is function overloading?

**Function overloading** in C++ allows multiple functions to have the same name but different parameters. These functions can differ in the number of parameters or their types. This enables functions to perform similar tasks with different types or amounts of input.

```cpp
// Function to add a float and an integer
int sum(float a, int b){
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

// Function to add three integers
int sum(int a, int b, int c){
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

int main(){
    float x = 2.5;
    int y = 3;
    int z = 4;

    cout << "Sum of float and int: " << sum(x, y) << endl;
    cout << "Sum of three integers: " << sum(y, z, 5) << endl;
}
```

**[⬆ Back to Top](#table-of-contents)**

---
