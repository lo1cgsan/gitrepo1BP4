#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  nwd1.py

def main(args):
    a = int(input('Podaj liczbę: '))
    b = int(input('Podaj liczbę: '))
    licznik = 0
    while a != b:
        licznik += 1
        if a > b:
            a -= b
        else:
            b -= a
    
    print('NWD =', a)
    print('Licznik:', licznik)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
