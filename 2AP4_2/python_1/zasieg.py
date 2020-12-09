#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zasieg.py

suma = 10  # zmienna globalna

def drukuj():
    global suma
    print(suma)
    suma = 20

def drukuj2(liczba):
    liczba += 10
    print(liczba)
    return liczba

def main(args):
    suma = 5  # zmienna lokalna
    liczba = 3
    # print(suma)
    # drukuj()
    # print(suma)
    print(liczba)
    liczba = drukuj2(liczba)
    print(liczba)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
