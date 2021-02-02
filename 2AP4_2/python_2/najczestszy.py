#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  najczestszy.py
from random import randint


def losuj(n, zakres):
    lista = []
    for i in range(n):
        lista.append(randint(0, n))
    return lista


def policz_elementy(lista, n):
    wystapienia = dict()
    
    for i in lista:
        licznik = 0
        if i not in wystapienia:
            for j in lista:
                if i == j:
                    licznik += 1
            wystapienia[i] = licznik
    
    print(wystapienia)
    

def main(args):
    ile = 20
    zakres = 30
    lista = losuj(ile, zakres)
    print(lista)
    policz_elementy(lista, ile)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
