#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  formatowanie.py
import math

def main(args):
    lf = 12.23456789
    print("Liczba Pi: %6.2f" % math.pi)
    print("Liczba Pi: {:6.2f}".format(math.pi))
    print(f"Liczba Pi: {math.pi}")
    
    li = 100
    print(hex(li))
    print(oct(li))
    print(bin(li))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
