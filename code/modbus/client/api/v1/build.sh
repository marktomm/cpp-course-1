#!/bin/bash

rm -f modbus_client.o libmodbus_client.a libmodbus_client.so

# Define include and source directories
INCLUDE_DIR=.
SOURCE_DIR=./src

# Step 1: Compile the source file into an object file
g++ -I${INCLUDE_DIR} -c ${SOURCE_DIR}/modbus_client.cpp -o modbus_client.o

# Step 2: Create a static library
ar rcs libmodbus_client.a modbus_client.o

# Step 3: Create a shared library
# g++ -shared -o libmodbus_client.so modbus_client.o
