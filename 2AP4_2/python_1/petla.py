#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sumuj_parzyste(start, stop):
    suma = 0
    # [0, 2, 4, 6, 8, 10, ...]
    for i in range(start, stop+1, 2):
        # liczba = int(input('Podaj liczbę: '))
        suma = suma + i

    print(suma)


def drukuj_nieparzyste(start, stop):
    # ~if start % 2 == 0:
        # ~start = start + 1
    for i in range(start, stop+1):
        if i % 2 == 1:
            print(i)

def main(args):
    start = int(input('Podaj początek zakresu: '))
    stop = int(input('Podaj koniec zakresu: '))
    # sumuj_parzyste(start, stop)
    drukuj_nieparzyste(start, stop)
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
