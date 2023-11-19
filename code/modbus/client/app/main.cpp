#include <cstddef>
#include <cstdint>

#include <iostream>
#include <string>
#include <vector>

#include "api/v1/include/modbus_client.h"

using namespace std;

int main() {
  using namespace Aig::Modbus;
  ModbusClient mbcli;
  mbcli.Connect("127.0.0.1");
  std::cout << "fn 1 addr 1 value: " << mbcli.PollFn1Address(1) << "\n";
  return 0;
}