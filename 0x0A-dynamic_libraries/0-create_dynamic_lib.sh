#!/bin/bash

filename=libdynamic.so

gcc -fPIC -c *.c
gcc -shared -o $filename *.o

rm *.o

if [ -f $filename ]; then 
    rm *.c 
    echo "LIBRARY '$filename' HAS BEEN CREATED."
else
    echo "SOMETHING WENT WRONG..."
fi
