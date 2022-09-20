#!/usr/bin/env python2.7

def fib(x, y, limit):
    print(y) 
    z = x + y

    if limit[1] != limit[0]:
        limit[1] = limit[1] + 1
        fib(y, z, limit)

fib(0, 1, [100, 0])