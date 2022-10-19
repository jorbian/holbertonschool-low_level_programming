#!/bin/bash

filename=liball.so

gcc -c -fPIC *.c
gcc -shared *.o -o $filename

rm *.o

if [ -f $filename ]; then 
    rm *.c
    echo "LIBRARY '$filename' HAS BEEN CREATED."
else
    echo "SOMETHING WENT WRONG..."
fi
