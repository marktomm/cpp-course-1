### Week1.Day3 Theory: Introduction to `vector`, and Reading Program Arguments

---

#### What is `vector`?

The `vector` is a container type in the C++ Standard Library. A container is a type with particular agreements on the interface and behavior. The `vector` provides a way to store a dynamic array of elements. Unlike simple arrays, vectors can dynamically resize themselves when an element is inserted or deleted, without the need to explicitly manage memory.

#### Relation to Strings and Arrays

- **Arrays**: Both `vector` and arrays store elements in a contiguous block of memory. The main difference is that vectors are dynamic, meaning they can grow and shrink at runtime.
  
- **Strings**: Strings are very similar to vectors but are specialized for characters (`char`). In many implementations, `string` is implemented as a `vector<char>`.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
```

#### Basic Operations on `vector`

- **Adding Elements**: You can add elements using `push_back()`.

  ```cpp
  vector<int> vec;
  vec.push_back(1);  // [1]
  vec.push_back(2);  // [1, 2]
  vec.push_back(3);  // [1, 2, 3]
  ```

- **Accessing Elements**: Elements can be accessed similar to arrays.

  ```cpp
  int firstElement = vec[0];  // 1
  ```

- **Removing Elements**: You can remove elements from the end using `pop_back()`.

  ```cpp
  vec.pop_back();  // [1, 2]
  ```

- **Size**: The `size()` method returns the number of elements in the vector.

  ```cpp
  size_t vecSize = vec.size();  // 2
  ```

#### Reading Program Arguments into `vector<string>`

One useful application of `vector` is to store command-line arguments. In C++, the `main()` function can take parameters that allow you to read the command-line arguments passed to your program.

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    vector<string> cmdLineArgs(argv, argv + argc);
    for(int i = 0; i < argc; ++i) {
        cout << cmdLineArgs[i] << endl;
    }
    return 0;
}
```

In this example, `argc` tells you the number of command-line arguments, and `argv` is an array of C-style strings representing the arguments. We initialize our `vector<string>` with these C-style strings and then print them using a traditional for-loop.

This concludes the theory for Week 1, Day 3. You should now have a solid understanding of what `vector` is, its relationship with arrays and strings, and how to manipulate vectors in C++.
