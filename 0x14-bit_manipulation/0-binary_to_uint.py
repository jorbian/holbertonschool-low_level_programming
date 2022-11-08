#!/usr/bin/env python3

def binary_to_uint(binary):
    number = 0
    mult = 0
    length = 0

    if (binary == None):
        return (0)

    length = len(binary)

default_test_case = [
    "1",
    "101",
    "1e01",
    "1100010",
    "0000000000000000000110010010"
]

for case in default_test_case:
    print(case)