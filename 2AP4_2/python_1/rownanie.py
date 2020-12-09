#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rownanie.py
#  
#  Rozwiąż równanie liniowe: a * x + b = 0
#  
#  1) Pobierz wartości współczynników a i b.
#  2) Jeśli a = 0,
#         jeśli b = 0, wyprowadź "nieskończenie wiele rozwiązań"
#         w przeciwnym wypadku wyprowadź: "równanie sprzeczne"
#     w przeciwnym wypadku oblicz x = -b / a i wyprowadź x

def main(args):
    a = int(input('Podaj a: '))
    b = int(input('Podaj b: '))
    if a == 0:
        if b == 0:
            print('nieskończenie wiele rozwiązań')
        else:
            print('równanie sprzeczne')
    else:
        x = -b / a
        print(x)
    # ~if a == 0 and b == 0:
        # ~print('nieskończenie wiele rozwiązań')
    # ~elif a == 0:
        # ~print('równanie sprzeczne')
    # ~else:
        # ~x = -b / a
        # ~print(x)
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
