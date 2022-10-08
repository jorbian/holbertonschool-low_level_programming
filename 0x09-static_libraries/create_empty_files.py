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
possible_data_types = "|".join(data_type)
find_funciton = {
    "declaration": re.compile(f"^({possible_data_types})(.*)\((.*?)\)"),
    "name": re.compile(f"(?![{possible_data_types}])(.*)\("),
    "parameters": None
} 

header_file = "main.h"
with open(header_file, 'r') as file:
    function_declaration = [y[0] for y in 
        list(filter(
            (lambda item: item is not None),
            [re.search(find_funciton["declaration"], x) for x in file.readlines()]
    ))]


find_function_name = re.compile(f"(?![{all_possible_data_types}])(.*)\(")
spam = [re.search(find_function_name, x)[0][:-1] for x in function_declaration]

print(spam)