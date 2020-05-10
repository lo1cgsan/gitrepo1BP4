#!/usr/bin/env python
# -*- coding: utf-8 -*-
import random


def losujLiczby(lista, n, maks):
    for i in range(n):
        lista.append(random.randint(0, maks))


def main(args):
    n = int(input("Ile liczb? "))
    maks = 50
    lista = []  # pusta lista
    losujLiczby(lista, n, maks)
    print(lista)
    szuk = int(input("Szukamy: "))
    lista.append(szuk)  # dodajemy wartownika
    i = 0
    while lista[i] != szuk:
        i += 1
    if i < n:
        print("Znaleziony, i = ", i)
    else:
        print("Nie znaleziony, i = ", i)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
