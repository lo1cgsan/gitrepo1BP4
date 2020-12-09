#!/usr/bin/env python
# -*- coding: utf-8 -*-

def lpierwsze(n):
    for i in range(2, n + 1):
        pierwsza = True
        j = 2
        while pierwsza and j < i:
            if i % j == 0:
                pierwsza = False
            j += 1
        if pierwsza:
            print(i, " ", end="")


def sito(n):
    tablica = [True] * (n + 1)
    for i in range(2, n + 1):
        if tablica[i]:
            j = i + i
            while j <= n:
                tablica[j] = False
                j += i

    for i in range(2, n + 1):
        if tablica[i]:
            print(i, " ", end="")


def main(args):
    n = int(input("Podaj liczbę: "))
    # lpierwsze(n)
    sito(n)

    return 0

#int tablica[n];
#for (i = 2; i <= n; i++) {
#    tablica[i] = true;
#}


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
