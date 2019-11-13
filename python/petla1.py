#!/usr/bin/env python
# -*- coding: utf-8 -*-

def suma_parzystych():
    wynik = 0
    for i in range(0,101,2):
        wynik = wynik + i
   
    print(wynik)


def suma_nieparzystych():
    wynik = 0
    for i in range(0,101,2):
        wynik = wynik + i
   
    print(wynik)


def sumuj_wprowadzone():
    # zapytaj użytkownika ile wprowadzi liczb
    ile = int(input('Ile podasz liczb? '))
    
    # pobieraj te liczby i sumuj
    wynik = 0
    for i in range(ile):
        liczba = int(input('Podaj liczbę: '))
        wynik = wynik + liczba
    
    # wydrukuj sumę wprowadzonych liczb
    print(wynik)


def main(args):
    # [0, 1, 2, 3, 4]
    # suma_parzystych()
    # suma_nieparzystych()
    sumuj_wprowadzone()
    
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
