#!/bin/bash

foldername=backup_c
target_extension=c

if [ -d $foldername ]; then
    rm -r $foldername;
fi
mkdir -p $foldername

eval "cp *.$target_extension $foldername"