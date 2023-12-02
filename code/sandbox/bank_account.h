#include <iostream>
#include <string>

namespace MyCompanyLtdLibrary {
namespace SecondNs {

// Object Oriented Programming approach
class BankAccount {
private:
// encapsulation
  double money_{0}; // fundamental type 
  std::string name;
  std::string number;

public:
  double getMoney() {
    return money_;
  }

  std::string getName() {
    return name;
  }

  // these algorithms/functions alter the state of the variable of type
  // BankAccount
  void setName(std::string n) {
    name = n;
  }

  void withdraw(double amount) {
    if (money_ < amount) {
      std::cout << "Insufficient funds bro!\n";
      return;
    }

    money_ = money_ - amount;
  }

  void add(double amount) { money_ = money_ + amount; }
};

} // namespace SecondNs
} // namespace MyCompanyLtdLibrary