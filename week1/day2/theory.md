# Week1.Day2 Theory: Exploring Char Arrays, Namespaces, and Functions in C++

---

## Char Arrays: The Gateway to C-Style Strings 

### Brief Introduction to Arrays:

Arrays are data structures that hold multiple values of the same type. They act as containers with multiple slots to store data.

```cpp
// Syntax to declare an array
int numbers[5] = {1, 2, 3, 4, 5}; // An array of integers
```

#### Finding the Length of an Array
To find the length of an array in C++, you can use the `sizeof()` operator. For example, for an integer array:

```cpp
int length = sizeof(numbers) / sizeof(numbers[0]);
```

### Char Arrays: C-Style Strings

Char arrays in C++ can be used to represent what we call "C-Style Strings".

```cpp
char hello[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // \0 represents the end of the string
```

Must end with leading 0 integer. '0' is ASCII character that has the number 30, so to insert a literal zero, but make the compiler treat it as character, use '\0'. Real 0 integer is treated as end of text when dealing with char arrays.

#### Why Char Arrays are Important for Networking:

Char arrays are ideal for low-level operations, often seen in networking scenarios like WebSockets or Modbus.

```cpp
for(int i = 0; hello[i] != '\0'; ++i) {
  cout << hello[i];
}
```

#### Comparing Char Arrays and Strings:

- **Strings are easier to use.**

Here is how to achieve the same functionality with `std::string`:

```cpp
std::string helloStr = "Hello";

for(int i = 0; i < helloStr.length(); ++i) {
  cout << helloStr[i];
}
```

---

## Understanding Namespaces:

Namespaces help us to group logically related classes, functions, and variables together, thus preventing naming conflicts.

### Why Prefixes in C?

Languages like C do not have the concept of namespaces. GNU libhttp uses the `MHD_` prefix to avoid name clashes.

```cpp
namespace MyNamespace {
  void myFunction() {
    cout << "Inside MyNamespace";
  }
}

// Using
MyNamespace::myFunction();
```

---

## Functions: Copy by Value

### Passing Arguments by Value:

In this mechanism, the value of the actual parameter is copied into the formal parameter's storage location, meaning modifications do not reflect outside the function.

Here's an example:

```cpp
#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = x * 2;
    cout << "Value inside function: " << x << endl;
}

int main() {
    int a = 5;
    modifyValue(a);
    cout << "Value outside function: " << a << endl;  // Output will still be 5
    return 0;
}
```

### Returning Values:

When a value is returned from a function, a new copy of the data is returned. Here's how you would do it:

```cpp
#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    int result = square(a);
    cout << "Square of a: " << result << endl;  // Output will be 25
    return 0;
}
```

This wraps up the theory for Week 1, Day 2. You should now have a foundational understanding of char arrays, namespaces, and function argument passing in C++.
