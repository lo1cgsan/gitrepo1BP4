#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  czypierwsza.py


def main(args):
    n = int(input("Podaj liczbę: "))  # F4

    if n < 1 or n > 6000:  # E5
        print("błędne dane")
    else:
        licz_dzielniki = 0
        for i in range(2, n + 1):  # A7:A6005
            if n % i == 0:  # B7:B6005
                print(i)  # drukowanie znalezionego dzielnika
                licz_dzielniki += 1
        if licz_dzielniki == 1:  # E5, ILE.LICZB()
            print("liczba pierwsza")
        else:
            print("liczba nie jest pierwsza")

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
