#!/usr/bin/env python2.7

def convert_to_base(string, base=hex):

    available_base_conversions = [hex, oct, bin]
    assert(base in available_base_conversions), "MUST PROVIDE A VALID BASE TO CONVERT STRING TO"

    return "".join(
            [
                ("\\" + base(ord(x))[1:]) for x in string
            ]
        )
###############################################################################
###############################################################################
if __name__ == "__main__":

    available_base_conversions = [hex, oct, bin]
    title = "-- BASE CONVERTER --\nBY\nJONATHAN BOLLER"
    instructions = """
\nCONVERTS A STRING TO A SPECIFIED BASE. FOR USE IN C OR BASH'S 'printf()'
FUNCTION OR OTHER PURPOSES. FOR EXAMPLE, 'Hello world' CONVERTS TO: 
'\\x48\\x65\\x6c\\x6c\\x6f\\x20\\x77\\x6f\\x72\\x6c\\x64' IN HEXIDECIMAL. TO USE 
TYPE STRING, FOLLOWED BY A COMMA, AND THEN THE BASE YOU WANT TO CONVERT IT TO.
IF LEFT BLANK THE FUNCTION DEFAULTS TO CONVERTING TO HEXIDECIMAL. PRESS
CNTRL+C TO EXIT."""
    
    print("%s%s" % (title, instructions))

    string_2_convert = raw_input().split(",")