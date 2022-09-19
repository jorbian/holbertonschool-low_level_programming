#!/usr/bin/env python2.7
#
# A script which takes an existing betty comppliant C file and copies it into
# another new file. It assumes you already have a betty compliant C file to source
# it's boilerplate from. 
#
# USAGE: "./new_c_file.py $name_of_new_file $different_file_want_to_copy_from"
# Again invoke the script with the whatever you want to name your new file as the 
# first parameter. The second parameter is optional.
#
# Suggestions -- You might want to rename the script "new.py" or bind it to the alias
# new. But I'm not going to tell you how to live your life...

import sys

default_input = "example1.c"
default_output = "new_c_file.c"

try:
    output_file = sys.argv[1]
except:
    output_file = default_output

try:
    input_file = sys.argv[2]
except:
    input_file = default_input

with open(input_file, "r") as file:
    boilerplate = file.read()

with open(output_file, "w") as file:
    file.write(boilerplate)