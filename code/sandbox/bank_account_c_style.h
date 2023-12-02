#include <iostream> // std::cout, std::cin

namespace MyNs66 {

class BankAccount {
public:
  double money_{0}; // fundamental type 
  std::string name;
  std::string number;
};

void withdraw(BankAccount &ref, double amount) {
    ref.money_ -= amount;
}

void add(BankAccount &ref, double amount) {
    ref.money_ += amount;
}

}