#!/usr/bin/env python3

import re

raw_data = """{'Iceland': 'Reykjavik', 'Bahrain': 'Manama', 'Russia': 'Moscow', 'Japan': 'Tokyo', 'Australia': 'Canberra', 'Canada': 'Ottawa', 'Spain': 'Madrid', 'UK': 'London', 'China': 'Beijing', 'Germany': 'Berlin', 'Sweden': 'Stockholm', 'France': 'Paris', 'Brazil': 'Brasilia', 'USA': 'Washington'}"""
search_pattern = "(?<=')([a-zA-Z]*)(?=')"
sorted_data = re.findall(search_pattern, raw_data)

code = ""
for i in range(0, len(sorted_data), 2):
    code += f'    hash_table_set(ht, "{sorted_data[i]}", "{sorted_data[i+1]}");\n'

print(code)