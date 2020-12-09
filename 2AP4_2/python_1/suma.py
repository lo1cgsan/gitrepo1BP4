#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma.py

def main(args):
    suma = 0
    i = 0
    n = int(input("Ile podasz liczb? "))
    for i in range(n):
        a = int(input("Podaj liczbę: "))
        suma = suma + a
    print(suma)
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
