# Week 1 Day 3 Code-Along: std::vector and Program Arguments

Today, we are going to dive into the world of `std::vector` and how to use program arguments in C++. Let's start coding!

## Part 1: std::vector

`std::vector` is a container that holds elements in a dynamically resizable array. It handles its own memory management and resizing.

#### Example 1: Initializing a Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    return 0;
}
```

#### Example 2: Accessing Vector Elements

```cpp
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
```

## Part 2: Program Arguments

Program arguments are parameters you can pass into your program from the command line when you run it.

#### Example 3: Reading Program Arguments

```cpp
int main(int argc, char *argv[]) {
    cout << "Number of arguments: " << argc << endl;
    for(int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    return 0;
}
```

#### Example 4: Storing Program Arguments in a Vector

```cpp
#include <vector>
#include <string>

int main(int argc, char *argv[]) {
    vector<string> args(argv, argv + argc);
    for(int i = 0; i < args.size(); ++i) {
        cout << "Argument " << i << ": " << args[i] << endl;
    }
    return 0;
}
```

Feel free to play around with these examples and experiment on your own. Happy coding!
