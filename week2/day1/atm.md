# ATM Simulation Functional Requirements and API Overview

## Document ID
ATM-SIM-CPP-FR-API-1.1

## Purpose
This document describes the functional requirements and API overview for a C++ Command Line Interface (CLI) based Automatic Teller Machine (ATM) simulation. 

## Scope
The simulation shall be capable of:
1. Accepting user commands from standard input (`stdin`).
2. Initializing with a clean state (volatile memory).
3. Handling add and withdraw operations on a single account.

## Functional Requirements

### FR1: Initialization
1. The simulation shall start with a balance of zero (0).
2. All data shall be held in volatile memory; no persistence is required.

### FR2: User Input
1. The simulation shall accept the following commands from `stdin`:
    - `add [amount]`: Adds the specified `amount` to the account balance.
    - `withdraw [amount]`: Withdraws the specified `amount` from the account balance.
    - `quit`: Terminates the program.

### FR3: Add Operation
1. Upon receiving the `add [amount]` command, the simulation shall increase the account balance by `[amount]`.

### FR4: Withdraw Operation
1. Upon receiving the `withdraw [amount]` command, the simulation shall decrease the account balance by `[amount]`, given that the account has sufficient funds.

### FR5: Error Handling
1. The program shall display an error message for invalid commands or if the withdrawal operation would result in a negative balance.

## API Overview

### Functions
1. `void start(double &balance)`: Starts the simulation loop, requires a reference to the balance variable.
2. `void addFunds(double &balance, double amount)`: Adds funds to the account, requires a reference to the balance variable and the amount to be added.
3. `void withdrawFunds(double &balance, double amount)`: Withdraws funds from the account, requires a reference to the balance variable and the amount to be withdrawn.

### Command Format
The system shall use the following command format for its operations:
- Add: `add [amount]`
- Withdraw: `withdraw [amount]`

### Example Usage

```cpp
void start(double &balance);
void addFunds(double &balance, double amount);
void withdrawFunds(double &balance, double amount);

int main() {
    double balance = 0.0;
    start(balance);
    return 0;
}
```

This document serves as the definitive guide for developers implementing the ATM simulation in a procedural style, focusing on utilizing references rather than objects or pointers.
