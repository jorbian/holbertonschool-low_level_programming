#!/usr/bin/env python2.7

def convert_to_hex(string):
    return "".join(
            [
                ("\\" + hex(ord(x))[1:]) for x in string
            ]
        )

test = "Hello world"

print(convert_to_hex(test))