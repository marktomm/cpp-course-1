#include <iostream>

// fn args are passed by value (i.e. copied)
int fnName(int x, double d) {
    std::cout << "input X: " << x << "\n";
    x = 9000;
    std::cout << "input X is now: " << x << "\n";
    return x;
}

// we can also pass arguments by ref(erence)
void fnNameRef(int & x, double & d) {
    std::cout << "input X: " << x << "\n";
    x = 9000;
    std::cout << "input X is now: " << x << "\n";
}

int main() {
    // these are just some comments
    int myName = 25;
    double myFpNumber = 3.14;

    int anotherVar = fnName(myName, myFpNumber);

    std::cout << "myName var is: " << myName << "\n";
    std::cout << "avar: " << anotherVar << "\n";

    fnNameRef(myName, myFpNumber);

    std::cout << "myName is finally: " << myName << "\n";

    return 0;
}