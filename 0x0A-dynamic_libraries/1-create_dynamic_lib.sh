#!/bin/bash
gcc -fPIC -c *.c
gcc -dynamiclib -o liball.so *.o