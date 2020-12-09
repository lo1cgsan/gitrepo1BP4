#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pliniowe_wart.py
#  

def main(args):
    n = 6
    tab = [1, 5, 3, 5, 0, 9, None]
    szuk = int(input("Podaj liczbę: "))
    tab[6] = szuk  # dodanie wartownika
    i = 0
    while tab[i] != szuk:
        i += 1
    if i < n:
        print("Znaleziono, i = ", i)
    else:
        print("Nie ma, i = ", i)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
