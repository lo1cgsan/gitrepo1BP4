#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sumuj_liczby():
    """
    Funkcja pobiera liczby od użytkownika i sumuje dopóki
    suma nie przekroczy wartości 75.
    """
    suma = 0
    while suma < 75:
        liczba = int(input('Podaj liczbę: '))
        suma = suma + liczba
    
    print("Suma liczb:", suma)


def main(args):
    sumuj_liczby()
    
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
