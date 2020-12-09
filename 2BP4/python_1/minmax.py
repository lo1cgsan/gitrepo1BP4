#!/usr/bin/env python
# -*- coding: utf-8 -*-
import random


def losujLiczby(lista, n, maks):
    for i in range(n):
        lista.append(random.randint(0, maks))


def min_liczba(lista, n):
    # n - 1 operacji porównań
    [3, 6, 8, 3, 1]
    l_min = lista[0]
    for i in range(1, n):
        if lista[i] < l_min:
            l_min = lista[i]
    return l_min


def max_liczba(lista, n):
    [3, 6, 8, 3]
    l_max = lista[0]
    for i in range(1, n):
        if lista[i] > l_max:
            l_max = lista[i]
    return l_max


def main(args):
    n = int(input("Ile liczb? "))
    maks = 50
    lista = []  # pusta lista
    losujLiczby(lista, n, maks)
    print(lista)
    l_min = min_liczba(lista, n)
    l_max = max_liczba(lista, n)
    print(f"Minimum: {l_min}")
    print(f"Maksimum: {l_max}")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
