#!/bin/bash

# Create an object file for each .c file
gcc -c *.c

# Create the static library from all the object files
ar rcs liball.a *.o
