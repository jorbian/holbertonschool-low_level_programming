#!/usr/bin/env python3

import re 

# A list of all the data types in C
data_type = [
    "char",
    "unsigned char",
    "signed char", 
    "int", 
    "unsigned int",
    "short",
    "unsigned short",
    "long",
    "unsigned long"
    "float",
    "double",
    "long double",
    "void"
]
all_possible_data_types = "|".join(data_type)
find_funciton = {
    "declaration": re.compile(f"^({all_possible_data_types})(.*)\((.*?)\)"),
    "name": re.compile(f"(?![{all_possible_data_types}])(.*)\("),
    "parameters": None
} 

print(find_funciton)