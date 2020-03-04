#!/usr/bin/env python
# -*- coding: utf-8 -*-

def pobierzLiczbe():
    return int(input('Podaj liczbę: '))
    
def main(args):
    a = pobierzLiczbe()
    b = pobierzLiczbe()
    while a > 0:
        a %= b
        b -= a
    print(b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
