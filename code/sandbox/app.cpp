// ATM program

// V 1.0 requirements:
// 1. single user bank account (use double for balance)
// 2. can add money to balance
// 3. can withdraw money from balance
// 4. the program starts with 100.00 dollars in the account
// 5. at the end of the program output the resulting balance
// 6. make the program interactive (CLI - Command Line Interface)

// V 1.1 requirements:
// 1. Add user name (std::string) to bank account

#include <iostream> // std::cout and std::cin
#include <string>

using namespace std;

void withdraw(double & balance, double amount) {
    if(balance < amount) {
        cout << "Insufficient funds bro!\n";
        return; 
    }

    balance = balance - amount;
}

void add(double & balance, double amount) {
    balance = balance + amount;
}

int main() {
    // V 1.0 req 1 and 4
    // TYPE NAME = DATA;
    double bankacc = 100.00;

    cout << "Dear user. Please enter command (withdraw amount, add amount)\n";
    // we have to collect a command from the user
    string command;
    cin >> command;

    // we have collected the amount from the user
    double amount;
    cin >> amount;

    cout << "User supplied cmd: " << command << " and amount: " << 
    << amount << "\n";

    if(command == "withdraw") {
        withdraw(bankacc, amount);
    } else if (command == "add") {
        add(bankacc, amount);
    }

    cout << "The resulting balance is " << bankacc << "\n";  
}