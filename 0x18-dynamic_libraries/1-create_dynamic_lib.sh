#!/bin/bash
# Author - Joyclare Cherono
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
