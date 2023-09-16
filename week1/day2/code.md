# Week 1 Day 2 Code-Along: Char Arrays and Functions

In this code-along, we will delve deeper into character arrays and functions in C++. Let's get our hands dirty with some code!

## Part 1: Char Arrays

#### Example 1: Initializing a Char Array

```cpp
char name[5] = {'J', 'o', 'h', 'n', '\0'};
```

#### Example 2: String Copying in Char Array

```cpp
char source[] = "Hello";
char destination[6];

for(int i = 0; i < 6; ++i) {
    destination[i] = source[i];
}
```

## Part 2: Functions

#### Example 3: Basic Function

```cpp
void sayHello() {
    cout << "Hello!" << endl;
}
```

#### Example 4: Function with Parameters

```cpp
void printSum(int a, int b) {
    int sum = a + b;
    cout << "Sum is: " << sum << endl;
}
```

#### Example 5: Function that Returns a Value

```cpp
int multiply(int a, int b) {
    return a * b;
}
```

Now, try calling these functions in your `main()`.

```cpp
int main() {
    sayHello();
    printSum(5, 3);
    int result = multiply(2, 4);
    cout << "Result of multiplication: " << result << endl;
    return 0;
}
```

That wraps up our code-along for today. Practice these examples, and don't hesitate to experiment further!
