// ATM

#include <iostream>
#include <string>

using namespace std;

// Program requirements:
// 1. single user bank account (use double for balance)
// 2. can add money to balace
// 3. can withdraw money from balance
// 4. the program starts with 100.00 dollars in the account
// 5. at the end of the program output the resulting balance
// 6. make the program interactive (CLI - Command Line Interface)

// adds money to the balance
void addMoney(double &balance, double amount) { balance = balance + amount; }

void withdrawMoney(double &balance, double amount) {
  if (balance < amount) {
    std::cout << "Error: not enough funds\n";
    return;
  }

  balance = balance - amount;
}
int main() {
  // done point 1 and point 4
  double balance = 100.00;

  // endless loop
  bool isRun = true;
  string command;
  double amount;
  while (isRun) {
    cout << "Current balance: " << balance << "\n";
    cout << "Enter command (add amount, withdraw amount, quit)\n";
    cin >> command;

    if (command == "add") {
      cin >> amount;
      addMoney(balance, amount);
    }

    if (command == "quit") {
      isRun = false;
    }
  }

  // done point 2
  // addMoney(balance, 0.25);

  // done point 3
  // withdrawMoney(balance, 50);

  // done point 5
  cout << "Balance: " << balance << "\n";
  return 0;
}