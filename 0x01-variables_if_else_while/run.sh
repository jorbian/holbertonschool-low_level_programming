#!/usr/bin/env bash

if [[ $# -lt 1 ]]; then
    read -p "PLEASE PROVIDE THE NAME OF THE '.c' FILE YOU WISH TO COMPILE AND RUN: " filename
else 
    $1=filename
fi 

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $filename -o delete_me.exe

./delete_me.exe

rm delete_me.exe