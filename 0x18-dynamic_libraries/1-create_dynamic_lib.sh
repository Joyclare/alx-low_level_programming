#!/bin/bash
# Author -Joyclare Cherono
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o -LIBll.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
