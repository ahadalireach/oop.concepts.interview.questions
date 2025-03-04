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
(#what-is-the-delete-keywordoperator-in-c-and-its-purpose-and-benefits) |
| 28   | [What is OOP?](#what-is-oop) |
| 29   | [Why OOP? Purpose of Implementing OOP?](#why-oop-purpose-of-implementing-oop) |
| 30   | [Why is OOP so popular?](#why-is-oop-so-popular) |
| 31   | [Pros and Cons of Object-Oriented Programming (OOP)](#pros-and-cons-of-object-oriented-programming-oop) |
| 32   | [Difference between Object-Oriented Programming vs Structural Programming](#difference-between-object-oriented-programming-vs-structural-programming) |
| 33   | [Difference between Procedure-Oriented Programming (POP) and Object-Oriented Programming (OOP)](#difference-between-procedure-oriented-programming-pop-and-object-oriented-programming-oop) |
| 34   | [What do you understand by a pure object-oriented language?](#what-do-you-understand-by-a-pure-object-oriented-language) |
| 35   | [What is Struct?](#what-is-struct) |
| 36   | [What is a Class and Why Do We Need It in OOP?](#what-is-a-class-and-why-do-we-need-it-in-oop) |
| 37   | [Why Use a Class Instead of a Struct?](#why-use-a-class-instead-of-a-struct) |
| 38   | [Similarities Between Class and Struct](#similarities-between-class-and-struct) |
| 39   | [Difference Between Class and Struct](#difference-between-class-and-struct) |
| 40   | [What is Object and Why Do We Need It in OOP?](#what-is-a-object-and-why-do-we-need-it-in-oop) |
| 41   | [What are Class Attributes & Methods in OOP?](#what-are-class-attributes-methods-in-oop) |
| 42   | [How is memory allocated for variables and functions in a C++ class, and how does this differ for objects of the class?](#how-is-memory-allocated-for-variables-and-functions-in-a-c-class-and-how-does-this-differ-for-objects-of-the-class) |
| 43   | [What are access specifiers in OOP?](#what-are-access-specifiers-in-oop) |
| 44   | [What is Sealed Modifier?](#what-is-sealed-modifier) |
| 45   | [What is the `new` keyword/operator in C++ and its purpose and benefits?](#what-is-the-new-keywordoperator-in-c-and-its-purpose-and-benefits) |
| 46   | [What is the `delete` keyword/operator in C++ and its purpose and benefits?](#what-is-the-delete-keywordoperator-in-c-and-its-purpose-and-benefits) |
| 47   | [What does it mean by Pointer to objects in C++ and what is its purpose and benefit?](#what-does-it-mean-by-pointer-to-objects-in-c-and-what-is-its-purpose-and-benefit) |
| 48   | [What are friend functions and friend classes in C++? How are they used?](#what-are-friend-functions-and-friend-classes-in-c-how-are-they-used) |
| 49   | [What is the arrow (->) operator and . operator in C++, and what is their purpose and benefits with classes and objects?](#what-is-the-arrow---operator-and--operator-in-c-and-what-is-their-purpose-and-benefits-with-classes-and-objects) |
| 50   | [What does it mean by Array of Objects in C++?](#what-does-it-mean-by-array-of-objects-in-c) |
| 51   | [How can you use arrays of objects and pass objects as function arguments in C++? Provide examples.](#how-can-you-use-arrays-of-objects-and-pass-objects-as-function-arguments-in-c-provide-examples) |
| 52   | [What are the types of variables in OOP?](#what-are-the-types-of-variables-in-oop) |
| 53   | [What is `this` pointer in OOP and its purpose?](#what-is-this-pointer-in-oop-and-its-purpose) |
| 54   | [What are Member Functions, Its Purpose and Nesting of Member Function in OOP?](#what-are-member-functions-its-purpose-and-nesting-of-member-function-in-oop)
| 55   | [Explain the concept of `static` in OOP?](#explain-the-concept-of-static-in-oop) |
| 56   | [What are static data members, member functions, variables, and functions?](#what-are-static-data-members-member-functions-variables-and-methods) |
| 57   | [What is `const` in OOP and how is it used?](#what-is-const-in-oop-and-how-is-it-used) |

---

### What is Programming & Why C++?

**Programming**

Programming is the process of creating a set of instructions that tell a computer how to perform specific tasks. It translates human ideas into a form that machines can understand.

**Why C++?**

C++ was created by Bjarne Stroustrup in 1979 and is valued for:

- **Proximity to Hardware**: It provides low-level access to memory and hardware, allowing for efficient memory management and faster execution.
- **Performance**: Used in performance-critical applications such as system software, game development, and real-time systems because it offers fine control over system resources.

**[⬆ Back to Top](#table-of-contents)**

---

### What is a Programming Paradigm?

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

### What is the Difference Between C++ and C?

- **C++** is an extension of **C**, providing additional features like **Object-Oriented Programming (OOP)**, **overloading**, and **templates**.
- **C** is procedural, while **C++** supports both procedural and object-oriented programming.

**[⬆ Back to Top](#table-of-contents)**

---

### Files Structure in C++

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

### What do Low Level and High Level Mean?

**High Level**: Imagine using Google to search for something. You don’t need to understand how Google works behind the scenes, you just type your query and get results easily. High-level programming languages are like this – they’re designed to be easy to use and understand, without worrying about how everything works under the hood.

**Low Level**: This is like looking at the inside of a computer. Instead of just asking Google a question, you’d need to understand the detailed processes inside Google’s system. Low-level languages work closer to the machine and require a better understanding of how things work on the hardware.

In short, **high-level** is easy to use and understand, while **low-level** gives you more control but is more complex.

**[⬆ Back to Top](#table-of-contents)**

---

### What are Variables and Comments?

**Variables**: Think of variables as labeled boxes where you can store information. If you have a box labeled `age`, you can put a number in it to represent someone's age. Variables can hold different types of data, like numbers (`int`), decimal values (`float`), or characters (`char`).

**Comments**: Comments are like sticky notes you put in your code to explain what’s happening. They don’t affect how the program runs—they’re just there for anyone reading the code to understand it better. You might write a comment to explain why a certain piece of code is there or what a variable is used for.

**[⬆ Back to Top](#table-of-contents)**

---

### Variable Scope

The scope of a variable defines where in the code you can use it. You can think of it like this: if you’re in a specific room, you can only use the items in that room. Similarly, a variable's scope determines where it can be accessed in your program.

- **Local Variables**: These are variables declared inside a function. They can only be used within that function. Just like a key you only use in one room, local variables are only usable where they're defined.

- **Global Variables**: These are declared outside of any function and can be used anywhere in your code. Like a master key that opens all rooms, global variables are accessible from any part of the program.

**[⬆ Back to Top](#table-of-contents)**

---

### What are Data Types?

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

### What are Reserved Keywords in C++?

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

### What are Operators and Their Different Types in C++?

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

### What are Built-in Data Types in C++?

Built-in data types in C++ are predefined types that are fundamental for storing data in a program. These data types are part of the C++ language and are used to store simple types of data.

- **`int`**: Stores integer values (e.g., `1`, `-10`, `42`).
- **`float`**: Stores single-precision floating-point numbers (e.g., `3.14`, `-0.001`).
- **`char`**: Stores single characters (e.g., `'a'`, `'1'`, `'$'`).
- **`double`**: Stores double-precision floating-point numbers (e.g., `3.1415926535`).
- **`bool`**: Stores boolean values, which are either `true` or `false`.

**[⬆ Back to Top](#table-of-contents)**

---

### What is the Difference Between `float`, `double`, and `long double` Literals?

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

### What is Typecasting in C++?

Typecasting is the process of converting a variable from one data type to another. This is useful when you need to perform operations that require specific data types or when you want to ensure compatibility between different data types.

In C++, you can perform typecasting using different syntax:

- **C-style cast**: `(float)a` - This converts the variable `a` to a `float`.
- **Functional cast**: `float(a)` - This is another way to convert `a` to a `float`.

Typecasting helps in performing precise operations, especially when dealing with mixed data types.

**[⬆ Back to Top](#table-of-contents)**

---

### How Do You Use the Scope Resolution Operator in C++?

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

### What are constants, manipulators, and operator precedence in C++?

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

### What are Control Structures in C++?

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

### What are the differences between for, while, and do-while loops in C++?

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

**[⬆ Back to Top](#table-of-contents)**

---

### What is the difference between the break and continue statements in C++?

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

### What is a pointer and how is it used?

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

### What is an array, and how are arrays and pointers related in C++?

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

### What are Struct, Union, and Enums in C++?

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

### What are Function and Function Prototypes in C++?

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

### What are Actual and Formal Parameters?

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

### What does it mean by Call by Value, Call by Reference, & Call by Pointer in C++?

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

### What does it mean by Inline Functions, Default Arguments, & Constant Arguments in C++?

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

### Recursion and Recursive Function in C++?

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

### What is function overloading?

**Function overloading** in C++ allows multiple functions to have the same name but different parameters. These functions can differ in the number of parameters or their types. This enables functions to perform similar tasks with different types or amounts of input.

When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.

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


### What is OOP?

- OOP stands for Object-Oriented Programming.
- It's a **programming paradigm** or way of writing code that uses "objects" to represent real-world things or concepts.
- Each object can have its own data and functions (called methods) that work with that data.
- It is easier to relate real world entities to the OOP.

#### 🔑 Key Features (Pillars of OOP)
1. **Encapsulation** – Restricts direct access to object data, ensuring security.
2. **Abstraction** – Hides complex details, exposing only essential features.
3. **Inheritance** – Allows a class to reuse properties and behavior of another class.
4. **Polymorphism** – Enables objects to be treated as instances of a common parent class.

**[⬆ Back to Top](#table-of-contents)**

---

### Why OOP? Purpose of Implementing OOP?

OOP provides several benefits that make software development efficient and maintainable:

- **Modularity** – Breaks programs into smaller, manageable parts.
- **Code Reusability** – Inheritance reduces code duplication.
- **Scalability** – Efficiently builds and extends large systems.
- **Maintainability** – Modular structure simplifies debugging and updates.
- **Real-world Modeling** – Represents real-world entities as objects.
- **Parallel Development** – Teams can work on different objects independently.
- **Data Security** – Encapsulation restricts unnecessary access to data.

**💡 OOP helps write **organized, reusable, and maintainable code**, making it a preferred choice for large-scale software development. 🚀**

**[⬆ Back to Top](#table-of-contents)**

---

### Why is OOP so popular?

OOPs, programming paradigm is considered as a better style of programming. Not only it helps in writing a complex piece of code easily, but it also allows users to handle and maintain them easily as well.

#### **Key Reasons for OOP's Popularity**
- **Modularity** – Breaks programs into smaller, manageable parts.
- **Code Reusability** – **Inheritance** reduces duplication and promotes efficiency.
- **Scalability** – Easily extends and adapts to growing software needs.
- **Maintainability** – Modular structure simplifies debugging and updates.
- **Real-world Modeling** – Represents real-world entities as objects.
- **Parallel Development** – Teams can work on different modules independently.
- **Data Security** – **Encapsulation** restricts unauthorized access.

#### **Not only that, the main pillar of OOPs**
1. **Encapsulation** – Binds data and methods together, restricting direct access.
2. **Abstraction** – Hides unnecessary details, exposing only essential features.
3. **Inheritance** – Enables reusability by deriving new classes from existing ones.
4. **Polymorphism** – Allows one interface, multiple implementations for flexibility.

Makes it easy for programmers to solve complex scenarios. As a result of these, OOPs is so popular.

**[⬆ Back to Top](#table-of-contents)**

---

### Pros and Cons of Object-Oriented Programming (OOP)

| **Pros** | **Cons** |
|----------|---------|
| **Modularity** – Breaks programs into smaller, manageable parts. | **Requires Skilled Programmers** – Developers need a strong understanding of objects and OOP concepts. |
| **Code Reusability** – Inheritance allows efficient reuse of existing code, reducing redundancy. | **Not Suitable for All Problems** – OOP might not be the best choice for certain small-scale or simple problems. |
| **Scalability** – Easily extendable for larger projects and adaptable to changing requirements. | **Larger Codebase** – Programs tend to be lengthier than procedural programming approaches. |
| **Better Maintainability** – Organized code structure makes debugging and updates easier. | **More Memory Consumption** – Object creation and dynamic features may lead to higher memory usage. |
| **Data Security** – Encapsulation restricts unauthorized access, ensuring better data protection. | **More Planning Required** – The design phase is complex and requires proper planning before implementation. |
| **Real-world Modeling** – Represents real-world entities effectively, making software design intuitive. | **Slower Execution Speed** – Due to abstraction layers, OOP can be slightly slower than procedural programming. |
| **Parallel Development** – Different modules can be worked on independently, improving team collaboration. | **Documentation Dependency** – Understanding OOP code without proper documentation can be difficult. |
| **Easy to Modify & Extend** – Polymorphism allows modifying or extending existing functionalities without altering the entire code. | **Longer Development Time** – Designing classes, relationships, and interactions requires more effort upfront. |

**Additional Advantages of OOP:**
- Follows a **bottom-up approach**, making code more structured.
- **Encapsulation** avoids unnecessary data exposure and enhances security.
- OOP **forces extensive design planning**, leading to better architecture and fewer flaws.
- **Breaks down complex problems** into manageable chunks.
- **Enhances productivity** by minimizing complexity and allowing easy redesigns without affecting other functionalities.
- Provides **efficient modeling of real-world entities**, making programming more intuitive.

**[⬆ Back to Top](#table-of-contents)**

---

### Difference between Object-Oriented Programming vs Structural Programming

| **Object-Oriented Programming (OOP)**                          | **Structural Programming**                                                                  |
|---------------------------------------------------------------|--------------------------------------------------------------------------------------------|
| **Follows a bottom-up approach** – Development starts with objects and their interactions. | **Follows a top-down approach** – Development starts with defining functions and procedures. |
| **Supports data hiding** – Uses encapsulation to restrict direct access to data. | **Does not support data hiding** – Data is freely accessible within the program. |
| **Best suited for complex and large-scale applications.** | **Best suited for moderate or small-scale applications.** |
| **Code reusability** – Inheritance and polymorphism reduce redundancy. | **Limited code reusability** – Functions can be reused, but there is no built-in inheritance. |
| **Based on objects and classes** – Emphasizes real-world modeling. | **Based on procedures and functions** – Focuses on breaking a problem into smaller tasks. |
| **Provides better security** – Data is controlled through access modifiers. | **Less secure** – Data is shared across functions, increasing exposure. |
| **Higher abstraction and flexibility** – Uses encapsulation, polymorphism, and abstraction for better control. | **Less abstraction and flexibility** – Code organization is more rigid and procedural. |
| **Focuses on data and behavior (methods).** | **Focuses on process and step-by-step execution.** |

- **OOP** is ideal for complex, scalable applications with reusable components and better security.
- **Structural Programming** is suitable for simpler applications that require a straightforward, procedural approach.

**[⬆ Back to Top](#table-of-contents)**

---

### Difference between Procedure-Oriented Programming (POP) and Object-Oriented Programming (OOP)

| **Procedure-Oriented Programming (POP)** | **Object-Oriented Programming (OOP)** |
|------------------------------------------|------------------------------------------|
| Centers around functions or procedures. | Centers around objects that bundle data and methods. |
| Data is often global and less secure. | Data is encapsulated within objects, providing better security. |
| Programs are structured as a sequence of steps or procedures. | Programs are structured around objects and classes. |
| Limited reusability of code due to a lack of modularity and encapsulation. | Promotes reusability through mechanisms like inheritance and polymorphism. |
| Less suitable for complex applications. | More suitable for complex applications. |
| Focuses on function calls. | Focuses on message passing between objects. |

**Limitations of OOP:**
- Programs written using OOP tend to be larger than those using procedural programming.
- Requires significant planning and pre-work before implementation.
- Without proper documentation, OOP code can be challenging to understand.
- Object-oriented programs may consume more memory due to dynamic features.
- Not ideal for small, simple problems.
- Development may take longer due to class and object structuring.

**[⬆ Back to Top](#table-of-contents)**

---

### What do you understand by pure object-oriented language?

A programming language is called a **pure object-oriented language** if it treats everything inside the program as an object. Unlike hybrid OOP languages, pure OOP languages do not support primitive data types (e.g., integers, floats, characters) outside the object model.

A pure OOP language must satisfy the following properties:

- **Encapsulation** – Data hiding through access modifiers.
- **Inheritance** – Ability to derive new classes from existing ones.
- **Polymorphism** – Same interface, different implementations.
- **Abstraction** – Hiding implementation details and exposing only necessary functionalities.
- **All Predefined Types Are Objects** – No primitive data types exist outside objects.
- **All User-Defined Types Are Objects** – Every custom type must be an object.
- **All Operations Are Performed Through Methods** – Direct access to variables is restricted; all interactions happen through object methods.

#### Examples of Pure OOP Languages
- **Smalltalk**
- **Eiffel**
- **Ruby**

Languages like **Java, C++, Python, and C#** are not purely object-oriented because they allow primitive data types like `int`, `char`, and `float` outside the object model.

**[⬆ Back to Top](#table-of-contents)**

---

### What is Struct?

- A struct (structure) is a user-defined data type in C++ that groups related variables under a single name.
- Structs are typically used for lightweight objects that hold data without requiring encapsulation or functionality.
- Unlike classes, struct members are `public` by default.

```cpp
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p1;
    p1.name = "Alice";
    p1.age = 30;
    cout << "Name: " << p1.name << ", Age: " << p1.age << endl;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What is a Class and Why Do We Need It in OOP?

- Class is a building block of OOP.
- It is a user defined data type.
- It is a blueprint or recipe for creating objects in object-oriented programming (OOP).
- It contains data members (attributes) and member functions (methods) that define the behaviors of objects.

**Why Do We Need It?**
- **Encapsulation:** Bundles data and methods that operate on the data.
- **Reusability:** Once defined, a class can create many instances (objects).
- **Inheritance:** A class can inherit properties and behaviors from other classes.
- **Abstraction:** Simplifies complex systems by hiding unnecessary details.

```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Bob";
    p1.age = 25;
    p1.introduce();
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### Why Use a Class Instead of a Struct?

#### 1. **Access Control:**
   - In **classes**, members can be made `private` or `protected`, restricting access to only those within the class or its derived classes.
   - **Structs** members are `public` by default, meaning they are accessible from outside the struct.

#### 2. **Functionality:**
   - **Classes** can have:
     - Member functions (methods)
     - Constructors and destructors
     - Operator overloading
   - **Structs** are typically used for simple data storage and do not support these advanced features.

#### 3. **Inheritance:**
   - **Classes** support **inheritance**, meaning a class can derive from another class and reuse or modify its functionality.
   - **Structs** do not support inheritance, limiting their ability to extend functionality.

```cpp
// Class with Private Members
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize the data members
    Person(string n, int a) : name(n), age(a) {}

    // Member function to display the details
    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object of the class
    Person p1("Charlie", 28);

    // Calling the member function to show details
    p1.showDetails();
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### Similarities Between Class and Struct

- Both are used to group related data.
- Both can contain member functions.
- Both can have member variables (data members).

**[⬆ Back to Top](#table-of-contents)**

---

### Difference Between Class and Struct

| **Class** | **Struct** |
|-----------|------------|
| By default, members are `private`. | By default, members are `public`. |
| Supports inheritance, polymorphism, encapsulation, and abstraction. | Does not support inheritance. |
| Can have constructors, destructors, and member functions. | Typically used for data storage and has limited functionality. |

```cpp
// Class Example
class Person {
private:
    string name;
public:
    Person(string n) : name(n) {}
    void display() { cout << "Name: " << name << endl; }
};

// Struct Example
struct PersonStruct {
    string name;
};
```

**[⬆ Back to Top](#table-of-contents)**

---


### What is a Object and Why Do We Need It in OOP?

- An **object** is an instance of a class.
- It represents real-world entities created from a blueprint (class) with properties (data members) and behaviors (member functions). Without objects, a class is just a blueprint and does not hold any actual data.

- **Objects store data** → A class is just a template; objects bring it to life.
- **Objects encapsulate behavior** → They allow actions to be performed using their methods.
- **Objects enable modularity** → They allow reusability and efficient organization of code.

- Think of a **class** as a **recipe** and an **object** as the actual **dish** made using that recipe. A recipe defines the ingredients and steps, but unless you cook it, the recipe itself is useless!

```cpp
#include <iostream>
using namespace std;

// Class Definition
class Car {
public:
    string brand;
    int speed;

    // Method to display car details
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar; // Creating an object of the Car class

    // Assigning values to object properties
    myCar.brand = "Toyota";
    myCar.speed = 120;

    // Calling the object's method
    myCar.showDetails();
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What are Class Attributes & Methods in OOP?

- **Attributes (or member variables)** represent the **state** of an object.
- **Methods** are functions defined inside a class that represent the **behavior** of the object.

```cpp
class Car {
public:
    string model;
    int year;

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.model = "Tesla Model 3";
    car1.year = 2023;
    car1.display();
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### How is memory allocated for variables and functions in a C++ class, and how does this differ for objects of the class?

- **For Variables:** When an object is created, memory is allocated for the object’s member variables. Each object has its own set of data members.
- **For Functions:** Member functions are not duplicated for each object. They are stored once in memory and shared by all instances of the class.

```cpp
class MyClass {
public:
    int x;  // Member variable
    static int count;  // Static variable (shared by all objects)

    MyClass() {
        x = 0;
    }

    void increment() {
        x++;
    }
};

// Memory allocation for static variable is shared across all objects
int MyClass::count = 0;
```

**[⬆ Back to Top](#table-of-contents)**

---

### What are access specifiers in OOP?

Access specifiers control the visibility of members in a class:

- **Public:** Members are accessible from anywhere in the program.
- **Private:** Members are accessible only within the class itself.
- **Protected:** Members are accessible within the class and its derived classes.

```cpp
class Person {
private:
    string name;

public:
    Person(string n) : name(n) {}

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p("David");
    p.displayName();  // Accessing public method
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What is Sealed Modifier?

A **sealed class** or **sealed modifier** is used to prevent other classes from inheriting from it. In some languages like C# or Java, marking a class as sealed ensures that no class can derive from it.

```csharp
sealed class MyClass {
    public void Display() {
        Console.WriteLine("This is a sealed class.");
    }
}

// This will result in a compile-time error:
// class DerivedClass : MyClass { }  // Error: cannot inherit from sealed class
```

- In languages like C++, the equivalent would be to simply avoid inheritance by not defining any child classes, as C++ does not have a direct **sealed** keyword.

**[⬆ Back to Top](#table-of-contents)**

---

### What is the `new` keyword/operator in C++ and what is its purpose and benefits?

The `new` keyword in C++ is used for **dynamically allocating memory** on the **heap** at runtime. It allows creating variables, objects, and arrays when their size is not known at compile time.

#### Purpose
- **Allocates memory on the heap** instead of the stack.
- Returns a pointer to the allocated memory.
- Used for creating objects dynamically, giving more control over memory.

#### Benefits
**Dynamic Memory Allocation** – Allows flexible memory management at runtime.
**Efficient Resource Utilization** – Allocates memory only when needed.
**Supports Object-Oriented Programming** – Enables dynamic object creation.
**Array Allocation** – Supports allocating arrays dynamically.

```cpp
int main() {
    // Allocating memory for a single integer
    int* ptr = new int(10);
    cout << "Value: " << *ptr << endl;

    // Allocating memory for an array
    int* arr = new int[5]{1, 2, 3, 4, 5};

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    // Freeing the allocated memory
    delete ptr;
    delete[] arr;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What is the `delete` keyword/operator in C++ and what is its purpose and benefits?

The `delete` keyword in C++ is used to **free dynamically allocated memory** that was allocated using the `new` keyword. It ensures that memory allocated on the **heap** is properly released and made available for reuse.

#### Purpose
- **Releases memory allocated with `new`**, preventing memory leaks.
- Returns the allocated memory back to the **operating system**.
- Improves memory efficiency, ensuring the program doesn't consume excessive resources.

#### Benefits
**Prevents Memory Leaks** – Ensures memory allocated using `new` is properly deallocated.
**Efficient Memory Management** – Helps manage heap memory efficiently, especially for large objects and arrays.
**Avoids Unnecessary Memory Consumption** – Frees up memory for reuse.

```cpp
#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate an array of 3 integers
    int* arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "Before delete: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

    // Free the allocated memory
    delete[] arr;

    // After deletion, accessing the array leads to undefined behavior
    cout << "After delete (undefined behavior): " << arr[0] << endl;
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What does it mean by Pointer to objects in C++ and what is its purpose and benefit?

#### What is a Pointer to an Object?
In C++, **pointers** are used to store addresses of both **primitive data types** (like `int`, `float`, `double`) and **objects of user-defined classes**.
A **pointer to an object** is a special pointer that stores the **memory address** of an object of a class type.

#### Purpose of Pointers to Objects
Pointers to objects are widely used in C++ for the following reasons:

- **Dynamic Object Creation**:
  - Objects can be created dynamically at runtime using the `new` keyword.
  - This allows more flexibility and efficient memory management.

- **Indirect Access**:
  - Objects can be accessed and manipulated indirectly through pointers.
  - Useful when working with dynamically allocated objects or when passing objects to functions.

- **Efficient Memory Management**:
  - Reduces unnecessary memory allocation and deallocation.
  - Helps in optimizing memory usage in large-scale applications.


```cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }

    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    Complex *ptr = new Complex;  // Dynamically creating an object

    ptr->setData(1, 54);  // Using -> operator to access members
    ptr->getData();

    delete ptr;  // Free allocated memory
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What are friend functions and friend classes in C++? How are they used?

In C++, **friend functions** and **friend classes** allow access to private and protected members of a class, even though they are not part of the class.

- **Friend Function** → A non-member function that has access to private/protected data of a class.
- **Friend Class** → A class that has access to another class's private/protected members.

#### **Friend Functions**

A **friend function** is a function that is **not a member** of a class but can still access the class’s **private and protected** members.

#### Properties:
- **Not a Member** → Defined outside the class.
- **Declared Inside the Class** → Declared using the `friend` keyword inside the class.
- **Can Access Private Members** → Can directly access private/protected members of the class.

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() : length(0) {}  // Constructor initializes length to 0
    void setLength(int l) { length = l; }

    // Friend function declaration
    friend void printLength(const Box& b);
};

// Friend function definition
void printLength(const Box& b) {
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b;
    b.setLength(10);
    printLength(b); // Calling friend function
}
```

#### **Friend Classes** in C++**

A **friend class** is a class that has **full access** to the private and protected members of another class.

#### Properties:
- **Grants Access to Another Class** → A class can access another class's private/protected members.
- **Defined Using `friend` Keyword** → The target class is declared as a `friend` inside the first class.
- **Useful for Closely Related Classes** → Used when two classes need to work together and share private data.

```cpp
#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
public:
    void showClassBDetails(const ClassB& b); // Function accessing ClassB's private members
};

class ClassB {
private:
    int secret;

public:
    ClassB() : secret(42) {}  // Constructor initializes secret

    // Declaring ClassA as a friend
    friend class ClassA;
};

// Member function of ClassA accessing ClassB’s private member
void ClassA::showClassBDetails(const ClassB& b) {
    cout << "ClassB's secret is: " << b.secret << endl;
}

int main() {
    ClassB b;
    ClassA a;
    a.showClassBDetails(b); // Accessing ClassB's private data
}
```

##### When to Use Friend Functions & Friend Classes?

| Feature      | Friend Function                                      | Friend Class                                      |
|-------------|------------------------------------------------------|--------------------------------------------------|
| **Access**   | Specific function                                    | Whole class                                      |
| **Use Case** | Used for utility functions that operate on private data | Used when two classes need deep integration     |
| **Example**  | A function that needs access to a class’s private data | A class that manages another class’s private members |


**Friend Functions**: Grant a **single function** access to private data.
**Friend Classes**: Grant an **entire class** access to another class’s private data.
**Use with Caution!** 🚨 Overusing friend functions/classes can break **encapsulation**.

**[⬆ Back to Top](#table-of-contents)**

---

### What is the arrow (->) operator and . operator in C++, and what is their purpose and benefits with classes and objects?

In C++, the **dot (`.`) operator** and **arrow (`->`) operator** are used to access **members (variables or functions)** of classes. They provide a way to interact with **class members** directly or through pointers.

#### `.` (Dot Operator)
- **Purpose**: Used to access members of an object **directly**.
- **When to Use?** When you have an **object** (not a pointer).
- **Benefits**: Simple and easy to read.

#### `->` (Arrow Operator)
- **Purpose**: Used to access members of an object **through a pointer**.
- **When to Use?** When you have a **pointer to an object**.
- **Benefits**: Allows working with dynamically allocated objects and **supports polymorphism**.

```cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }
};

int main() {
    Complex obj;

    obj.setData(1, 54);  // Accessing members using the . operator
    obj.getData();

    Complex *ptr = new Complex;
    ptr->setData(5, 10);  // Accessing members using the -> operator with a pointer
    ptr->getData();

    delete ptr;  // Free allocated memory
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### What does it mean by Array of Objects in C++?

An **array of objects** in C++ is an array where each element is an **instance of a class**. This allows storing multiple objects of the **same class type** in a **sequential manner** within a single array.

- **Array of Objects**: Just like primitive data types, objects of a class can also be stored in an array.
- **Purpose**:
  - **Storage & Organization**: Helps in managing multiple instances of a class efficiently.
  - **Efficient Access**: Enables **indexed** access to individual objects, making it easier to manipulate data.

```cpp
#include <iostream>
using namespace std;

class ShopItem {
    int id;
    float price;

public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void getData() {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main() {
    int size = 3;
    ShopItem *ptr = new ShopItem[size];  // Creating an array of ShopItem objects dynamically

    ShopItem *ptrTemp = ptr;  // Temporary pointer for iteration

    int p;
    float q;

    for (int i = 0; i < size; i++) {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;

        ptr->setData(p, q);  // Setting data for each ShopItem object in the array
        ptr++;  // Moving pointer to the next element in the array
    }

    for (int i = 0; i < size; i++) {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();  // Getting data for each ShopItem object in the array
        ptrTemp++;  // Moving temporary pointer to the next element in the array
    }

    delete[] ptr;  // Freeing dynamically allocated memory for the array
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### How can you use arrays of objects and pass objects as function arguments in C++? Provide examples.

#### Arrays of Objects

An **array of objects** is a collection of objects from the **same class**. Just like an array of basic data types, an **array of objects** allows multiple instances of a class to be stored **sequentially**.

```cpp
#include <iostream>
using namespace std;

class Employee {
    int id;
    int salary;

public:
    void setId() {
        salary = 122;
        cout << "Enter the id of employee: ";
        cin >> id;
    }

    void getId() const {
        cout << "The id of this employee is " << id << endl;
    }
};

int main() {
    Employee employees[4]; // Array of 4 Employee objects

    for (int i = 0; i < 4; i++) {
        employees[i].setId(); // Set ID for each employee
        employees[i].getId(); // Display ID for each employee
    }
}
```

#### Passing Objects as Function Arguments in C++

Objects in C++ can be passed to functions in **two ways**:

1. **Pass by Value**: A copy of the object is made, meaning changes inside the function **won’t affect the original object**.
2. **Pass by Reference**: The function receives a reference to the object, meaning it can **directly modify the original object**.


```cpp
#include <iostream>
using namespace std;

class Complex {
    int a;
    int b;

public:
    // Function to set values of a and b
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }

    // Function to set object data by summing two other objects
    void setDataBySum(const Complex &o1, const Complex &o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    // Function to print complex number
    void printNumber() const {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    // Passing objects as function arguments
    c3.setDataBySum(c1, c2);
    c3.printNumber();
}
```

- **Pass by Value** creates a copy of the object, meaning changes inside the function do not affect the original object.
- **Pass by Reference** (const &) avoids unnecessary copies and allows direct modification.
- **Function Overloading** can be used to perform different operations on objects.

**[⬆ Back to Top](#table-of-contents)**

---

### What are the types of variables in OOP?

In **OOP (Object-Oriented Programming)**, variables are categorized into different types based on **scope, lifetime, and memory location**.

The main types of variables in **OOP** are:
1. **Instance Variable**
2. **Static Variable**
3. **Local Variable**
4. **Reference Variable**


#### **1️. Instance Variable**
- It is an **object-level** variable.
- Declared inside a class but **outside methods, blocks, and constructors**.
- Created when an object is instantiated (`new` keyword).
- Can be accessed using **object reference**.

```cpp
#include <iostream>
using namespace std;

class Employee {
public:
    int id;  // Instance Variable

    void setId(int empId) {
        id = empId; // Assign value to instance variable
    }

    void display() {
        cout << "Employee ID: " << id << endl;
    }
};

int main() {
    Employee e1, e2;  // Creating objects
    e1.setId(101);
    e2.setId(102);

    e1.display();
    e2.display();
}
```

#### **2. Static Variable**

- It is a **class-level** variable shared among all objects.
- Declared using the `static` keyword.
- **Single memory allocation** for all objects.
- Can be accessed using **ClassName::variable_name**.

```cpp
#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // Static Variable

    Counter() {
        count++; // Increment count for each object
    }

    static void displayCount() {
        cout << "Total Objects Created: " << count << endl;
    }
};

// Initializing static variable
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;  // Creating three objects

    Counter::displayCount(); // Accessing static variable
}
```

**Explanation:** `count` is a **static variable**, shared among all objects of the `Counter` class.

#### **3. Local Variable**

- It is a **method-level** variable.
- Declared **inside a function, block, or constructor**.
- **Only accessible within that function or block**.
- Must be **initialized before use**.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    void show() {
        int localVar = 10; // Local Variable
        cout << "Local Variable: " << localVar << endl;
    }
};

int main() {
    Demo obj;
    obj.show();

    // cout << localVar;  // ❌ Error: localVar is not accessible outside show()
}
```

**Explanation:** `localVar` is a **local variable** inside `show()`, which means it **cannot be accessed outside** this function.

#### **4. Reference Variable**

- It is a **variable that points to an object**.
- It stores the **memory address** of another variable or object.
- Used for **efficient memory management** in OOP.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s1;
    s1.name = "Ahad";

    Student &s2 = s1; // Reference Variable

    cout << "Student 1 Name: " << s1.name << endl;
    cout << "Student 2 (Reference) Name: " << s2.name << endl;

    s2.name = "Ali";  // Changing via reference

    cout << "Updated Student 1 Name: " << s1.name << endl; // Also changes
}
```

**Explanation:** `s2` is a **reference variable** that refers to `s1`. Changing `s2` also modifies `s1` since they refer to the same memory location.

---

| Variable Type       | Scope          | Memory Location         | Access                                      |
|--------------------|---------------|-------------------------|--------------------------------------------|
| **Instance Variable** | **Object-level** | Heap Memory (inside object) | Accessed using `objectName.variableName` |
| **Static Variable**   | **Class-level**  | Static Memory (shared) | Accessed using `ClassName::variableName` |
| **Local Variable**    | **Method/block** | Stack Memory (temporary) | Accessed inside method only |
| **Reference Variable** | **Alias to another variable** | Uses memory of original variable | Accessed like normal variable |


Understanding different types of variables is essential in **Object-Oriented Programming (OOP)**.
- Use **instance variables** when **each object needs its own data**.
- Use **static variables** when **data needs to be shared among all objects**.
- Use **local variables** for **temporary data** inside functions.
- Use **reference variables** to create **aliases and manage memory efficiently**.

**[⬆ Back to Top](#table-of-contents)**

---

### What is `this` pointer in OOP and its purpose?

- In **C++**, `this` is a **pointer** that represents the **current instance** of a class.
- It is **implicitly passed** as a hidden argument to all **non-static** member function calls.

- **Purpose**:
    - **Identifying Object Context:** Helps distinguish between **local variables and instance variables** when they have the same name.
    - **Accessing Object's Members:** Enables accessing **member variables and methods** of the current object within its own scope.
    - **Returning References:** Can be used to return a **reference to the current object**, enabling **method chaining** and fluent interfaces.

```cpp
#include <iostream>
using namespace std;

class A {
    int a;

public:
    void setData(int a) {
        this->a = a;  // Using 'this' to access member variable 'a'
    }

    void getData() {
        cout << "The value of a is " << a << endl;
    }
};

int main() {
    A obj;
    obj.setData(5);
    obj.getData();
}
```

**Explanation:** The `this` pointer refers to the **current object** inside the class. It helps to differentiate between **local and instance variables**.

| Scope          | Memory Location         | Access                                      |
|--------------|-------------------------|--------------------------------------------|
|**Current Object Context** | Stack Memory | Accessed inside non-static methods |

**[⬆ Back to Top](#table-of-contents)**

---

### What are Member Functions, Its Purpose and Nesting of Member Function in OOP?

#### **Member Functions in OOP**
Member functions are **functions declared inside a class** that operate on its objects. They have access to **private and protected data members** of the class.

#### Purpose:
- **Encapsulation**: Helps bundle data and functions together.
- **Code Reusability**: Provides modular and reusable code.
- **Data Abstraction**: Controls data access.
- **Object Manipulation**: Modifies object states.

#### **Nesting of Member Functions**
Nesting of member functions means **calling one member function inside another** within the same class.

```cpp
#include <iostream>
using namespace std;

class Demo {
    int num;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void display() {
        input();  // Calling input() inside display()
        cout << "You entered: " << num << endl;
    }
};

int main() {
    Demo obj;
    obj.display();  // Calling display() triggers input()
}
```

**[⬆ Back to Top](#table-of-contents)**

---

### Explain the concept of `static` in OOP?

In Object-Oriented Programming (OOP), the `static` keyword is used to define **class-level** members that do not belong to individual objects. Instead, they are shared among all instances of the class.

#### Features of `static` in OOP:
- **Shared across objects**: A static member belongs to the class, not to an object.
- **Memory efficiency**: Static members are stored in a single memory location.
- **Access through class name**: Static members can be accessed using the class name without creating an instance.
- **No `this` pointer**: Static member functions do not have access to the `this` pointer.

**[⬆ Back to Top](#table-of-contents)**

---

### What are static data members, member functions, variables, and function?

#### **1. Static Data Members**
Static data members are **variables that belong to a class rather than an instance**. They are shared among all objects of the class and maintain a single copy in memory.

##### Characteristics:
- Declared inside the class using the `static` keyword.
- Defined and initialized outside the class using the **scope resolution operator (`::`)**.
- Shared by all objects of the class.
- Must be accessed using the class name (preferred) or an object.

```cpp
#include <iostream>
using namespace std;

class Employee {
public:
    static int count; // Static variable
    string eName;

    void setName(string name) {
        eName = name;
        count++; // Increment count for every new employee
    }

    static int getCount() { // Static method
        return count;
    }
};

// Define and initialize static variable
int Employee::count = 0;

int main() {
    Employee emp1, emp2;
    emp1.setName("Alice");
    emp2.setName("Bob");

    // Access static member using class name
    cout << "Total Employees: " << Employee::getCount() << endl;
}
```

#### **2. Static Member Functions**

Static member functions belong to the **class** rather than an **object** and can only access **static data members**.

##### Rules:
- Cannot access **non-static data members**.
- Cannot use the **`this` pointer**.
- Can be called using the **class name**.

```cpp
#include <iostream>
using namespace std;

class Circle {
    int radius;
    static const float Pi;

public:
    void setRadius(int r) {
        radius = r;
    }

    int getRadius() const {
        return radius;
    }

    // Static function to get Pi value
    static float getPi() {
        return Pi;
    }
};

// Define static constant
const float Circle::Pi = 3.14159;

int main() {
    // Access static function without creating an object
    cout << "Value of Pi: " << Circle::getPi() << endl;
}
```

#### **3. Static Variable**

A **static variable** is a variable that belongs to the **class** rather than an **instance**. It is shared among all objects of the class, meaning only **one copy** of the variable exists.

- **Shared Across Objects**: A static variable is common to all objects.
- **Declared Inside the Class**: But must be **defined outside** the class.
- **Memory Allocation**: Allocated once, at program start, and deallocated at program end.
- **Access**: Accessed using **class name** with `::` scope resolution operator.

```cpp
#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // Static variable declaration

    Counter() {
        count++; // Increment count for each object created
    }

    static int getCount() { // Static function
        return count;
    }
};

// Define and initialize static variable
int Counter::count = 0;

int main() {
    Counter obj1, obj2, obj3;

    // Access static variable using class name
    cout << "Total objects created: " << Counter::getCount() << endl;
}
```

#### **4. Static Functions**

A **static function** is a function that belongs to the **class**, not to any specific object. It can **only access static variables** and **other static functions**.

- **Cannot access non-static members**.
- **Does not require an object** to be called.
- **Cannot use** the `this` pointer.
- **Can be called using the class name**.

```cpp
#include <iostream>
using namespace std;

class Circle {
    int radius;
    static const float Pi;

public:
    void setRadius(int r) {
        radius = r;
    }

    int getRadius() const {
        return radius;
    }

    // Static function to get Pi value
    static float getPi() {
        return Pi;
    }
};

// Define static constant
const float Circle::Pi = 3.14159;

int main() {
    // Access static function without creating an object
    cout << "Value of Pi: " << Circle::getPi() << endl;
}
```

| Feature                  | Static Data Members                        | Static Member Functions                 | Static Variables                        | Static Functions                         |
|--------------------------|------------------------------------------|-----------------------------------------|-----------------------------------------|------------------------------------------|
| **Definition**           | A static variable inside a class.        | A function that belongs to the class.  | A static variable (inside or outside a class). | A static function that can only access static members. |
| **Memory**               | Stored in **data segment**, shared among objects. | Stored in **code segment**, no object needed. | Stored in **data segment**, retains value between function calls. | Stored in **code segment**, no object needed. |
| **Scope**                | Belongs to the **class** (not instances). | Belongs to the **class**.               | Local to a function or class.          | Belongs to the **class**.                |
| **Access**               | Can be accessed using **ClassName::member**. | Can be accessed using **ClassName::function()**. | If inside a class, accessed using **ClassName::member**. | Can be accessed using **ClassName::function()**. |
| **Initialization**       | Defined and initialized outside the class. | Defined inside the class.              | Initialized **once** when declared.    | Defined inside the class.                |
| **Can Access Non-Static?** | No, only static members.               | No, only static members.            | ✅ Yes (if global or non-class variable). | No, only static members.               |
| **Example**              | `static int count;`                      | `static int getCount();`               | `static int count = 0;`                | `static void display();`                 |


**[⬆ Back to Top](#table-of-contents)**

---

### What is `const` in OOP and how is it used?

In Object-Oriented Programming (OOP), `const` is used to define **immutable objects, data members, and member functions** that should not be modified after initialization.

#### **1. `const` Data Members**
A **`const` data member** is a variable within a class whose value **cannot be modified** after initialization. It **must be initialized at the time of object creation**.

##### Ways to Declare and Initialize `const` Data Members:
1. **Direct Initialization** (Some compilers do not allow this).
2. **Initializer List in Constructor** (Recommended approach).

```cpp
#include <iostream>
using namespace std;

class Student {
    string name;

    // 1) Initializing const member at time of declaration
    const int Id = 1;
    const double CNIC;

public:
    // 2) Initializing const member in member initializer list
    Student() : CNIC(1234567890123) {} // Correct way
};

int main() {
    Student obj;
}
```

- **Note: You must initialize const data members during object construction.**

#### **2. `const` Member Functions**
A `const` member function ensures that no class data members (whether const or non-const) can be modified inside it.

##### Key Rules:
- It only allows memory reading.
- It can be accessed by both const and non-const objects.
- Constructors cannot be const, as they modify object state.

```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    const int Id = 1;

public:
    // Const member function (Only reading is allowed)
    string getName() const {
        // name = "Ahad"; ❌ Error: Cannot modify data member
        return name;
    }

    int getId() const {
        // Id = 9; ❌ Error: Cannot modify `const` data member
        return Id;
    }
};

int main() {
    Student student_1;
    const Student student_2;

    // Accessing `const` function with a non-const object
    student_1.getId();

    // Accessing `const` function with a const object
    student_2.getId();
}
```

#### **3. `const` objects**
A `const` object is an instance of a class that only allows memory reading. This means you cannot modify any data members.

##### Key Rules:
- const objects can only call const member functions.
- They cannot call non-const member functions.

```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    const int Id = 1;

public:
    // Const function
    int getId() const {
        return Id;
    }

    // Non-const function
    string getName() {
        return name;
    }
};

int main() {
    const Student student_1;

    // ✅ Allowed: Calling `const` member function
    student_1.getId();

    // ❌ Error: `const` object cannot call non-`const` function
    // student_1.getName(); // Uncommenting this will cause an error
}
```

**[⬆ Back to Top](#table-of-contents)**

---
