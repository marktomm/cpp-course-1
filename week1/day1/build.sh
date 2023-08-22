#!/bin/bash

# Input argument: Optional file name to build
# If no argument is provided, the default file 'app.cpp' will be used

# Check if an argument is provided
if [ $# -eq 0 ]; then
    FILE_TO_BUILD="app.cpp"
else
    FILE_TO_BUILD="$1"
fi

# Check if the specified file exists
if [ -f "$FILE_TO_BUILD" ]; then
    g++ "$FILE_TO_BUILD" -Og -ggdb -o app
else
    echo "Error: File '$FILE_TO_BUILD' does not exist."
    exit 1
fi

# END
