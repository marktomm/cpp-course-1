#include <string>
#include <iostream>
#include <cstdint>

using namespace std;

int main(int argc, char** argv) {
    uint8_t y = 130;
    char hello[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    uint8_t x = 130;
    cout << (uint32_t)x << '\n';
    hello[6] = 200;
    cout << (uint32_t)x << '\n';
    return 0;
}