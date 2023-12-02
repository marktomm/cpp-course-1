#include <cstddef>
#include <cstdint>

#include <iostream>
#include <string>
#include <vector>

#include "api/v1/include/modbus_client.h"

using namespace std;

// Requirements:
// 1. Create a modbus client
// 2. that connects to a server on IP 127.0.0.1
// 3. get the data from the server for 
//    function 1 address 10

int main() {
  using namespace Aig::Modbus;
  ModbusClient mbcli;
  mbcli.Connect("127.0.0.1");
  std::cout << "fn 1 addr 10 value: " << mbcli.PollFn1Address(10) << "\n";
  return 0;
}