#include <cstddef>

#include <iostream>
#include <string>

/// TODO if necessary add headers

namespace Aig {
namespace Modbus {
class ModbusClient {
  uint16_t linkAddress_{1};
  bool isConnected_{false};

public:
  void SetLinkAddress(uint16_t la);
  void Connect(std::string ip);
  bool IsConnected();
  bool PollFn1Address(uint16_t addr);
  bool PollFn2Address(uint16_t addr);
  uint16_t PollFn3Address(uint16_t addr);
  uint16_t PollFn4Address(uint16_t addr);
  void Disonnect();
};
} // namespace Modbus
} // namespace Aig

using namespace std;