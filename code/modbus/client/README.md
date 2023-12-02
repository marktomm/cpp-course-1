# homework requirements 

Homework requirements:
1. Create a modbus client
2. that connects to a server to IP 127.0.0.1
3. get the data from the server for
   function 2 addresses 100 - 150
4. disconnect from the server
5. connect to server IP 172.16.28.4
6. get the data from the server for 
7. function 4 addresses 1-10

# how to build and run

```
./build_app.sh
./app.out
```

# details

Make changes to app/main.cpp
and then in code/modbus/client directory
run `./build_app.sh`. This creates `app.out` file
if build is fine. Then run `./app.out` to view 
the result

# the Modbus Client library API

The API for ModbusCient:
api/v1/include/modbus_client.h

## Simple usage example:

```cpp
// include the necessary header
#include "api/v1/include/modbus_client.h"

int main() {
    Aig::Modbus::ModbusClient mbcli;
    mbcli.Connect("192.168.0.111");
    mbcli.Disconnect();
    return 0;
}
```