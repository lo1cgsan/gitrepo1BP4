#!/usr/bin/env python
# -*- coding: utf-8 -*-

def prostokat(znak, szer, wys):
    for i in range(wys):
        for j in range(szer):
            print(znak, end='')
            if i == 0 or j == 0:  # pierwszy wiersz
                print(znak, end='')
            elif j > 0 and j < szer-1:
                print(" ", end='')
        print(znak)


def main(args):
    znak = input('Podaj znak: ')
    szer = int(input('Podaj szerokość: '))
    wys = int(input('Podaj wysokość: '))
    prostokat(znak, szer, wys)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
