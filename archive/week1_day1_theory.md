## Week1.Day1 Theory: Dive into C++ with STANDARD Data Types and STL Basics

---

### Basic Structure of a C++ Program (1 minute):

Every C++ program begins with the `main` function. This is where we put our instructions. At the end of `main`, we often see `return 0;`. We use this to check how our code works.

---

### Variables and STANDARD Data Types (7 minutes):

When we talk about data types, we focus on three main things: how big they are, what actions you can do with them, and what values they can hold.

#### Integers (`int`):

- **Size:** Ordinarily 4 bytes, though this might deviate depending on the platform.
- **Operations:** Basic arithmetic like addition, subtraction, multiplication, and more.
- **Values:** Typically spans from roughly -2 billion to 2 billion in many systems.
```cpp
int age = 30;
```

#### Floating-Point Numbers (`double`):

- **Size:** 8 bytes on most systems.
- **Operations:** Standard arithmetic operations with decimal precision.
- **Values:** Capable of holding expansive or minuscule numbers.
```cpp
double pi = 3.14;
```

#### Characters (`char`):

- **Size:** Generally 1 byte.
- **Operations:** Mainly comparisons and assignments.
- **Values:** Encompasses any ASCII character, from alphabets to symbols.
```cpp
char initial = 'A';
```

#### Strings (`string`):

- **Size:** Modulates with the content's length.
- **Operations:** Various, from appending and insertion to deletion and searching.
- **Values:** An amalgamation of characters.
```cpp
string greeting = "Hello, World!";
```

---

### Introduction to CONTAINERS: `vector` and `stack` (5 minutes):

C++ offers containers to help us store and manage groups of data. Let's explore two commonly used containers.

#### `vector`:
A `vector` is like a flexible list. It can change its size by adding or removing elements. It's more versatile than a regular array.

- **Creating and Adding**: Define a vector and add elements to it.

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};
numbers.push_back(6);
```

- **Accessing Elements**: Use indices just like with arrays.

```cpp  
int firstNumber = numbers[0];
```

- **Iterating**: A `vector` provides methods like `begin()` and `end()` to help go through its elements.

```cpp
for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << " ";
}
```

#### `stack`:
A `stack` follows a Last-In-First-Out (LIFO) system. This means the most recent item you add is the first one you take out.

- **Adding and Removing**: You can use `push()` to add and `pop()` to remove items.

```cpp
stack<string> books;
books.push("Effective C++");
string s = books.top();
books.pop();
```

---

### The Power of the STL Algorithms with vector (7 minutes):

The **Standard Template Library (STL)** in C++ has tools that make working with `vector` efficient and easy.

1. **Key Algorithms with `vector`:**

   - **Searching with `find`** 
     
     Quickly check if an element is in the vector. It gives a pointer to the element if it's there, or a pointer to the vector's end if it's not.

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};
auto it = find(numbers.begin(), numbers.end(), 3);
```

   - **Sorting with `sort`**
     
     Put the vector's elements in order, either from smallest to largest or based on rules you give.

```cpp
sort(numbers.begin(), numbers.end());
```

   - **Flipping order with `reverse`**
     
     Make the last element first, the second last second, and so on.

```cpp
reverse(numbers.begin(), numbers.end());
```

   - **Counting with `count`**
     
     See how many times an element is in the vector.

```cpp
int twos = count(numbers.begin(), numbers.end(), 2);
```

   - **Changing elements with `replace`**
     
     Swap one value for another wherever it appears in the vector.

```cpp
replace(numbers.begin(), numbers.end(), 2, 7);
```

2. **Using Loops with `vector`:**

   A simple way to go through a `vector` is with a range-based `for` loop:

```cpp
for(const int& num : numbers) {
    cout << num << " ";
}
```