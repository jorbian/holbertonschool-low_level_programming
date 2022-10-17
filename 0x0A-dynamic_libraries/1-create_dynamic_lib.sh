#!/bin/bash

filename=liball.so

gcc -fPIC -c *.c
gcc -dynamiclib -o $filename *.o

rm *.o
