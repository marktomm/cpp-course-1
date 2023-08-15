

## Practice Task Descriptions

---

**1. Vector Operations:**
You'll be performing basic operations on a vector of integers, like initializing, adding elements, and accessing specific items.

- Initialize a vector named `ages` with integers: 20, 25, 30, and 35. (`vector<int>`)
- Add the integer 40 to the end of the `ages` vector. (`push_back()`)
- Retrieve the third element from the vector and store it in the integer variable `thirdAge`. (`operator[]`)

---

**2. Stack Usage:**
In this task, you'll work with a stack of integers, practicing push, pop, and peek operations.

- Create an empty stack of integers named `numbers`. (`stack<int>`)
- Push the integers 10 and 20 onto the stack in that order. (`push()`)
- Without removing any elements, retrieve and store the top element of the stack in the integer variable `topNumber`. (`top()`)
- Now, remove the top element from the stack. (`pop()`)

---

**3. Algorithms with Vectors:**
You'll sort a vector of integers using the standard library's `sort` function.

- Initialize a vector named `data` with integers: 5, 3, 8, 2, and 9. (`vector<int>`)
- Using the standard library's `sort` function, sort the `data` vector in ascending order. (`sort()`)

---

**4. Checking Empty State and Size:**
In this task, you'll determine if a container is empty and retrieve its size.

- Check if the `numbers` stack is empty and store the result in a boolean variable named `isEmpty`. (`empty()`)
- Determine the number of elements in the `ages` vector and store the result in a variable of type `size_t` named `numOfAges`. (`size()`)

---

**String Search Operation:**

You'll be working with string manipulations in C++. The goal is to count how many times a specific substring appears within a larger string. You'll utilize the `find()` method to search through the string and increment a counter for each occurrence found.

- Initialize a string named `content` with the value: "The rain in Spain falls mainly in the plain.". (`string`)
- Create another string named `target` with the value "in". (`string`)
- Use an integer variable `count` to keep track of the number of occurrences of `target` within `content`. Start with a value of 0 for `count`.
- Using the `find()` method, begin searching for the `target` within `content` starting from the beginning. (`find()`)
- While the search result is not equal to `string::npos` (which signifies the end of the string or "no position"):
  - Increment the `count` variable by one.
  - Continue the search for the next occurrence of the `target` starting from the position immediately after the last found occurrence. 
- At the end of this process, the `count` variable should be equal to 5, indicating that "in" appeared 5 times in the `content` string.

---

Answers:

---

```cpp
// Vector Operations:
vector<int> ages = {20, 25, 30, 35};
ages.push_back(40);  // Adding to the vector
int thirdAge = ages[2];  // Accessing the third element
```

---

```cpp
// Stack Usage:
stack<int> numbers;
numbers.push(10);  // Pushing data onto the stack
numbers.push(20);
int topNumber = numbers.top();  // Viewing the top element without popping
numbers.pop();  // Removing the top element
```

---

```cpp
// Algorithms with Vectors:
vector<int> data = {5, 3, 8, 2, 9};
sort(data.begin(), data.end());  // Sorting the vector
```

---

```cpp
// Checking Empty State and Size:
bool isEmpty = numbers.empty();  // Checking if the stack is empty
size_t numOfAges = ages.size();  // Finding the number of elements in the vector
```
---

# Count Occurrences of a Substring

Suppose you want to know how many times a particular word or sequence appears in a string. This is a common task in text processing, and `string` provides tools to handle it without manually looping through each character.

```cpp
string content = "The rain in Spain falls mainly in the plain.";
string target = "in";
int count = 0;
size_t pos = content.find(target, 0); // start from the beginning
while(pos != string::npos){
    count++;
    pos = content.find(target, pos + 1); // continue from the next position
}
// Result: 'count' will be 5
```

In this example, we're counting the occurrences of the substring "in" within the string. The method `find()` searches for the target substring and returns its position or `string::npos` if not found. By advancing our search position after each find, we can count all occurrences.