def horner_it(st, x, wsp):
    wynik = wsp[0]
    for i in range(1, st + 1):
        wynik = wynik * x + wsp[i]
    return wynik


def drukuj(st, wsp):
    2x^3 + 3x^2 + 5x^1 + 4


def main(args):
    stopien = int(input("Podaj stopień: "))
    x = float(input("Podaj argument: "))
    wsp = []  # pusta lista współczynników
    for i in range(stopien + 1):
        wsp.append(float(input("Podaj współczynnik %s: " % i)))
    print("Wynik: ", horner_it(stopien, x, wsp))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
