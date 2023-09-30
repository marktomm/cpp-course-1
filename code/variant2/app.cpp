#include <iostream>
#include <string>

void addFunds(double& balance, double amount) {
    balance += amount;
}

void withdrawFunds(double& balance, double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Remaining balance: " << balance << std::endl;
    } else {
        std::cerr << "Error: Insufficient funds" << std::endl;
    }
}

void start(double& balance) {
    std::string command;
    double amount;

    while (true) {
        std::cout << "Current balance: " << balance << std::endl;
        std::cout << "Enter command (add [amount], withdraw [amount], quit): ";
        std::cin >> command;

        if (command == "add") {
            std::cin >> amount;
            addFunds(balance, amount);
        } else if (command == "withdraw") {
            std::cin >> amount;
            withdrawFunds(balance, amount);
        } else if (command == "quit") {
            break;
        } else {
            std::cout << "Error: Invalid command" << std::endl;
        }
    }
}

int main() {
    double balance = 0.0;
    start(balance);
    std::cout << "Balance before quit: " << balance << std::endl;
    if(balance == 0.0) {
        std::cerr << "Do not forget to make more money before you come back" << std::endl;
    }
    if(balance < 100.0) {
        std::cout << "Our banking system believes that you can do better" << std::endl;
    }
    return 0;
}
