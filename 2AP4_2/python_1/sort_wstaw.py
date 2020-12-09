#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wstaw.py
import random


def losuj(lista, n, maks):
    for i in range(n):
        lista.append(random.randint(0, maks))


def sort_wstaw(lista, n):
    """
    Funkcja sortuje listę liczb przy użyciu algorytmu
    sortowania przez wstawianie
    """
    for i in range(1, n):
        el = lista[i]
        j = i - 1
        while j >= 0 and lista[j] < el:
            lista[j + 1] = lista[j]
            j -= 1
        lista[j + 1] = el


def main(args):
    lista = []
    n = int(input("Ile liczb? "))
    losuj(lista, n, 50)
    print(lista)
    sort_wstaw(lista, n)
    print(lista)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
