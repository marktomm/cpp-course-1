## Week1.Day2: Diving into C++ Functions and Basic I/O

---

### 1. Basic Function Structure in C++

*(3 minutes)*

- Introduce the syntax emphasizing the importance of the return type, function name, and parameters.
- Highlight that in C++, type-checking is stringent, and this applies to functions as well.

```cpp
int add(int a, int b) {
    return a + b;
}
```

### 2. Return Type

*(3 minutes)*

- Delve into how every function in C++ has a return type.
- Mention the `void` return type for functions that don't give back a value.
- Explain the importance of matching the return type to the actual value being returned.

```cpp
void greet() {
    cout << "Hello, World!" << endl;
}

double getHalf(double number) {
    return number / 2;
}
```

### 3. Parameters and Arguments

*(3 minutes)*

- Differentiate between parameters (variables declared within function definition) and arguments (actual values that are passed to the function).
- Discuss the importance of data types for parameters in function declarations.

```cpp
// Parameters are a and b. When calling, we provide the arguments.
int multiply(int a, int b) {
    return a * b;
}

int result = multiply(5, 4);  // Here, 5 and 4 are the arguments.
```

### 4. Function Overloading

*(2 minutes)*

- Touch on the ability to have multiple functions with the same name in C++ but with different parameters.
- Emphasize how C++ enables this functionality by distinguishing between functions based on the number and type of their arguments.

```cpp
double area(double side) {             // For square
    return side * side;
}

double area(double length, double width) {  // For rectangle
    return length * width;
}
```

### 5. Default Arguments

*(2 minutes)*

- Describe the feature that allows for setting default values to function parameters in C++.
- Discuss the benefits of using default values for creating flexible functions that can operate with fewer arguments than specified.

```cpp
// If y isn't provided when calling, it defaults to 1
int power(int x, int y = 1) {
    int result = 1;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int square = power(4);      // Uses default y = 1, so acts as multiplier
int cube = power(4, 3);     // Uses provided y = 3
```

### 6. Basic I/O: `cout` and `cin`

*(2 minutes)*

- Introduce `cout` as the primary method for output in C++, part of the `iostream` library.
- Explain how it's used with the insertion operator (`<<`) to display data.
- Introduce `cin`, the counterpart for input. Highlight the use of the extraction operator (`>>`) to get data from the user.
- Briefly mention potential pitfalls like input type mismatches and how C++ is strict about type-safety.

```cpp
#include <iostream>

int main() {
    int age;
    cout << "Enter your age: ";  // Display message asking for age
    cin >> age;                  // Takes user input and assigns it to age variable
    cout << "You are " << age << " years old." << endl;
    return 0;
}
```