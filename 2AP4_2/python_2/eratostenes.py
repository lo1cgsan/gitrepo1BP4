#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  eratostenes.py
#  
from math import sqrt, floor


def szukaj_1(n):
    for i in range(2, n + 1):
        pierwsza = True
        j = 2
        while (pierwsza and j < i):
            if i % j == 0:
                pierwsza = False
            j = j + 1
        if pierwsza:
            print(i)


def szukaj_2(n):
    """
    Funkcja znajduje liczby pierwsze przy użyciu
    algorytmu zwanego sitem Eratostenesa.
    """
    # sito = []
    # for i in range(n + 1):
    #    sito.append(True)
    sito = [True] * (n + 1)
    sqrt_n = floor(sqrt(n))
    for i in range(2, sqrt_n + 1):
        if sito[i]:
            j = i + i
            while j <= n:
                sito[j] = False
                j = j + i
                
    # wyniki
    for i in range(2, n + 1):
        if sito[i]:
            print(i, end=' ')
            

def main(args):
    n = int(input("Podaj zakres: "))
    szukaj_2(n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
