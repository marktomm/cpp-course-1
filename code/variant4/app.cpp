// ATM

#include <iostream> // std::cout, std::cin
#include <string> // std::string

using namespace std;

// V 1.0 requirements:
// 1. single user bank account (use double for balance)
// 2. can add money to balance
// 3. can withdraw money from balance
// 4. the program starts with 100.00 dollars in the account
// 5. at the end of the program output the resulting balance
// 6. make the program interactive (CLI - Command Line Interface)

// V 1.1 requirements:
// 1. Add the possibility for 10 accounts

// V 1.2 requirements:
// 1. Add user name (std::string) to bank account

// our own new type
struct bankaccount {
  double balance;
  string name;
};

// adds money to the balance
void addMoney(bankaccount & acc, double amount) { acc.balance = acc.balance + amount; }

void withdrawMoney(bankaccount & acc, double amount) {
  if (acc.balance < amount) {
    std::cout << "Error: not enough funds\n";
    return;
  }

  acc.balance = acc.balance - amount;
}
int main() {
  // done point 1 and point 4
  // double balance = 100.00;

  // done point V1.1 1 and point V 1.0 4
  bankaccount bankaccs[10];
  int it = 0;
  while (it < 10) {
    bankaccs[it].name = "";
    bankaccs[it].balance = 100.00;
    it++;
  }

  // endless loop
  bool isRun = true;
  string command;
  double amount;
  int index;

  while (isRun) {
    cout << "Enter the account index (0-9):\n";
    cin >> index;

    if (index > 9) {
      cout << "Invalid index\n";
      continue;
    }

    bankaccount & accref = bankaccs[index];

    cout << "Current balance: " << accref.balance 
    << " for: " << accref.name << "\n";
    cout << "Enter command (add amount, withdraw amount, setname name, quit)\n";
    cin >> command;

    if (command == "add") {
      cin >> amount;
      addMoney(accref, amount);
    }

    if (command == "withdraw") {
      cin >> amount;
      withdrawMoney(accref, amount);
    }

    if(command == "setname") {
      cin >> accref.name;
    }

    if (command == "quit") {
      isRun = false;
    }
  }
  
  // done point V1.1 5
  // cout << "Balance: " << balance << "\n";

  for (int it = 0; it < 10; it++) {
    cout << "Balance for user " << bankaccs[it].name << ": " << bankaccs[it].balance << "\n";
  }

  return 0;
}