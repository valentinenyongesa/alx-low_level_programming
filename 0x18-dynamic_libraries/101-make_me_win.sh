#!/bin/bash
ldd ./gm
ltrace ./gm
ltrace ./gm 9 8 10 24 75 9
strings gm | less
gcc -fPIC -c test.c
gcc -shared -o libtest.so test.o
LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
