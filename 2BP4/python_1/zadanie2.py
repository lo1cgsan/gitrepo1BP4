#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zadanie22.py
#
# Zsumuj liczby naturalne w przedziale podanym przez użytkownika

    # if a < 0 or b < 0:
    # if a < 0 or b < 0 or a >= b:
    #    print('Błędne dane!')
    #    return
    # if a > b or a == b:
    # if a >= b:
    #    print('Błędne dane!')
    #    return

def sumuj_parzyste(a, b):
    suma = 0
    for liczba in range(a, b + 1):  # [10, 11, 12, 13, 14, ...]
        if liczba % 2 == 0:
            suma = suma + liczba
    print(suma)


def sumuj_nieparzyste(a, b):
    suma = 0
    for liczba in range(a, b + 1):  # [10, 11, 12, 13, 14, ...]
        if liczba % 2 == 1:
            suma = suma + liczba
    print(suma)


def main(args):
    a = b = -1
    while a < 0:
        a = int(input('Podaj 1 liczbę: '))
    
    while b <= a:
        b = int(input('Podaj 2 liczbę: '))
    
    # wywołanie funkcji
    sumuj_parzyste(a, b)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
