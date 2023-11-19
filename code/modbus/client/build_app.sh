#!/bin/bash

(
    cd api/v1/
    ./build.sh
)

LIB_DIR=./api/v1/

# Define include and source directories
INCLUDE_DIR=.
SOURCE_DIR=./app

# Step 1: Compile the source file into an object file
g++ -I${INCLUDE_DIR} ${SOURCE_DIR}/main.cpp -o app.out -L${LIB_DIR} -lmodbus_client