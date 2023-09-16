## Syntax vs Semantics in C++

### Syntax is Structure

Syntax errors occur when we violate the grammatical rules of the language. The compiler will catch these errors and inform you that your code can't be compiled.

#### Example of Syntax Error in C++

The following C++ code will result in a syntax error because of the missing semicolon:

```cpp
#include <iostream>
using namespace std

int main() {
    cout << "Hello, World!"
    return 0;
}
```

### Semantics is Meaning

Semantics refers to the meaning of your code. Even if your code is syntactically correct, you may still encounter semantic errors, which are more like "logical" errors in your program. The compiler will not catch these, so debugging can be trickier.

#### Example of Semantic Error in C++

The following C++ code contains a semantic error because the programmer is trying to assign a char array to an integer. The code compiles but doesn't achieve the likely intended conversion:

```cpp
#include <iostream>
using namespace std;

int main() {
    char myCharArray[] = "123";
    int myInt;

    // This is syntactically correct, but semantically incorrect.
    myInt = myCharArray;

    cout << "Value of myInt: " << myInt << endl;

    return 0;
}
```
