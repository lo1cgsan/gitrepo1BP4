#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zliczanie.py


def main(args):
    a = int(input('Podaj liczbę: '))
    licz5 = 0
    licz7 = 0
    while a != 0:
        if a % 5 == 0:
            licz5 = licz5 + 1
        if a % 7 == 0:
            licz7 = licz7 + 1
        a = int(input('Podaj liczbę: '))

    print('Podzielnych przez 5:', licz5)
    print('Podzielnych przez 7:', licz7)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
