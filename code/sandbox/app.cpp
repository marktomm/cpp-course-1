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

void withdraw(double &balance, double amount) {
  if (balance < amount) {
    cout << "Insufficient funds bro!\n";
    return;
  }

  balance = balance - amount;
}

void add(double &balance, double amount) { balance = balance + amount; }

class BankAccount {
public:
  double money_;
  string name;
  string number;
};

int main() {
  BankAccount ba[10]; // array - a sequence of things
  ba[0].money_ = 100.00;
  ba[0].number = "5566 8899 0011 2233";

  cout << "Hello! Enter your name:\n";
  cin >> ba[0].name;

  while (true) {
    cout << "Dear " << ba[0].name
         << ". Please enter command (withdraw amount, add amount, "
            "quit)\n";
    // we have to collect a command from the user
    string command;
    cin >> command;

    if (command == "quit") {
      break;
    }

    // we have collected the amount from the user
    double amount;
    cin >> amount;

    cout << "User supplied cmd: " << command << " and amount: " << amount
         << "\n";

    if (command == "withdraw") {
      withdraw(ba[0].money_, amount);
    } else if (command == "add") {
      add(ba[0].money_, amount);
    }
  }

  cout << "The resulting balance is " << ba[0].money_ << "\n";
}