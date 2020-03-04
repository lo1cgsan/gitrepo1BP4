#!/usr/bin/env python
# -*- coding: utf-8 -*-

def pobierzLiczbe():
    return int(input('Podaj liczbę: '))
    
def main(args):
    a = pobierzLiczbe()
    b = pobierzLiczbe()
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    print(a)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
