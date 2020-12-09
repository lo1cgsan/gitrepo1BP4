#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input('Podaj liczbę: '))
    b = int(input('Podaj liczbę: '))
    if a < b:
        print("a < b")
    elif b < a:
        print("b < a")
    else:
        print("b = a")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
