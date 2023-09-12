#include <string>
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main() {
    // string name = "Alice";
    string name("Alice");
    string fullName = name + " Johnson"; 
    cout << fullName << "\n";

    int pos = fullName.find("Johnson");
    cout << "pos:" << pos << "\n";
    fullName.replace(pos, 7, "Smith");

    // cout << fullName[0] << "\n"; 

    cout << fullName << "\n"; 

    return 0;
}