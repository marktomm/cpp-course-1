#include "include/modbus_client.h"
#include <iostream>

using namespace Aig::Modbus;
using namespace std;

void ModbusClient::SetLinkAddress(uint16_t la) {
  cout << "set link address: " << la << '\n';
  linkAddress_ = la;
}

void ModbusClient::Connect(std::string ip) {
  isConnected_ = true;
  cout << "connected to : " << ip << '\n';
}

bool ModbusClient::IsConnected() { return isConnected_; }

bool ModbusClient::PollFn1Address(uint16_t addr) {
  bool result = true;
  cout << "polling FN1 " << addr << ", result : " << result << '\n';
  return result;
}

bool ModbusClient::PollFn2Address(uint16_t addr) {
  bool result = true;
  cout << "polling FN2 " << addr << ", result : " << result << '\n';
  return result;
}

uint16_t ModbusClient::PollFn3Address(uint16_t addr) {
  uint16_t result = 100;
  cout << "polling FN3 " << addr << ", result : " << result << '\n';
  return result;
}

uint16_t ModbusClient::PollFn4Address(uint16_t addr) {
  uint16_t result = 100;
  cout << "polling FN4 " << addr << ", result : " << result << '\n';
  return result;
}

void ModbusClient::Disconnect() {
  isConnected_ = false;
  cout << "disconnected\n";
}