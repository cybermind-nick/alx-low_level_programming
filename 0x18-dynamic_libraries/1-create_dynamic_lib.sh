#!/bin/bash
gcc -c -Wall -Werror -pedantic fpic *.c
gcc -shared -o liball.so *.o
