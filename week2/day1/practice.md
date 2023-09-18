## Individual Practice Week 2 Day 1

---

### 1. Initialize an Array
- Initialize an integer array named `numbers` with 5 elements.
- Print the array using a loop.

---

### 2. Function to Calculate Sum
- Create a function `calculateSum` that takes an integer array and its length as arguments and returns the sum of all elements in the array.

---

### 3. Character Array Initialization
- Initialize a character array named `greeting` with the value "Hello".
- Print each character of the array using a loop.

---

### 4. Function to Count Vowels
- Write a function named `countVowels` that takes a character array and its length as arguments. The function should return the number of vowels in the array.

---

### 5. Using `sizeof` with Arrays
- Declare an integer array named `nums` with 10 elements.
- Use the `sizeof` operator to find the total size of the array in bytes and store it in a variable named `totalSize`.
- Calculate the number of elements in the array and store it in a variable named `numElements`.

---

### 6. String to Character Array
- Initialize a `std::string` named `sentence` with the value "C++ is great!".
- Convert this string into a character array.

---

### 7. Function to Find Maximum
- Write a function named `findMax` that takes an integer array and its length as arguments. The function should return the maximum element in the array.

---

### 8. Compare Char Arrays
- Initialize two character arrays named `arr1` and `arr2` with the values "hello" and "world", respectively.
- Create a function named `areEqual` that takes two character arrays and their lengths as arguments and returns a boolean value indicating whether the two arrays are equal.

---

## Answers:

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

// Answer 1
int numbers[5] = {1, 2, 3, 4, 5};
for(int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
}
cout << endl;

// Answer 2
int calculateSum(int arr[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// Answer 3
char greeting[] = "Hello";
for(int i = 0; greeting[i] != '\0'; i++) {
    cout << greeting[i];
}
cout << endl;

// Answer 4
int countVowels(char arr[], int length) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;
        }
    }
    return count;
}

// Answer 5
int nums[10];
int totalSize = sizeof(nums);
int numElements = totalSize / sizeof(nums[0]);

// Answer 6
string sentence = "C++ is great!";
char sentenceArr[sentence.length() + 1];
strcpy(sentenceArr, sentence.c_str());

// Answer 7
int findMax(int arr[], int length) {
    int maxVal = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Answer 8
bool areEqual(char arr1[], char arr2[], int len1, int len2) {
    if(len1 != len2) return false;
    for(int i = 0; i < len1; i++) {
        if(arr1[i] != arr2[i]) return false;
    }
    return true;
}
```

