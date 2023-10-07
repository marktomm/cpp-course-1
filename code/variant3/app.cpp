#include <iostream>
#include <string>

using namespace std;

void addMoney(double &balance, double amount) { balance += amount; }

void withdrawMoney(double &balance, double amount) {
  if (balance < amount) {
    cout << "Error: not enough funds\n";
    return;
  }
  balance -= amount;
}

int main() {
  // Requirement 1: 10 accounts
  double balances[10];
  
  // Initialize all balances to 100.00
  for (int i = 0; i < 10; ++i) {
    balances[i] = 100.00;
  }

  bool isRun = true;
  string command;
  double amount;
  int index;
  
  while (isRun) {
    cout << "Enter account index (0-9)\n";
    cin >> index;
    
    if (index < 0 || index >= 10) {
      cout << "Invalid index.\n";
      continue;
    }

    cout << "Current balance: " << balances[index] << "\n";
    cout << "Enter command (add amount, withdraw amount, quit)\n";
    cin >> command;

    if (command == "add") {
      cin >> amount;
      addMoney(balances[index], amount);
    }

    if (command == "withdraw") {
      cin >> amount;
      withdrawMoney(balances[index], amount);
    }

    if (command == "quit") {
      isRun = false;
    }
  }
  
  // Output final balances
  for (int i = 0; i < 10; ++i) {
    cout << "Account " << i << " balance: " << balances[i] << "\n";
  }

  return 0;
}
