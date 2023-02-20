#!/bin/bash

#this bash compile the latest c file that this should be in the same directory with the c file, otherwise it will not work

# Find the latest .c file in the current directory
latest_c_file=$(ls -t *.c | head -1)

# Extract the filename and remove the .c extension
filename=$(echo "$latest_c_file" | sed "s/.c$//")

# Compile the C file with gcc and output the compiled file with the same name as the source file
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$latest_c_file" -o "$filename"

# Run the compiled file
"./$filename"

# add a new line
echo
