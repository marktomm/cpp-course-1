#include <iostream>

void fn1(double & arg) {
    arg = arg * arg;
}

int main() {
    double mainVar = 100; // defined a double var 
    fn1(mainVar);
    std::cout << mainVar << "\n"; 
    return 0;
}
