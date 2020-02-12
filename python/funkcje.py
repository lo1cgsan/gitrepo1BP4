#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje.py

liczba1 = 10  # zmienna globalna

def drukuj():
    print(liczba1)

def drukuj2(liczba1):
    print(liczba1)
    liczba1 = 0
    return liczba1

def main(args):
    liczba1 = 20  # zmienna lokalna
    print(liczba1)
    liczba1 = drukuj2(liczba1)
    print(liczba1)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
