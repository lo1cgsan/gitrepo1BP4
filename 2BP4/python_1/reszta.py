def wydajReszte(reszta, listaNm):
    i = 0
    while reszta > 0:
        if listaNm[i] <= reszta:
            ileN = reszta // listaNm[i]
            reszta = reszta - ileN * listaNm[i]
            print(f"{ileN} x {listaNm[i]}")
        i += 1


def wydajReszte2(reszta, listaNm):
    reszta = 6
    i = 0
    liczbaNm = len(listaNm)
    while reszta > 0 and i < liczbaNm:
        if listaNm[i] <= reszta:
            ileN = reszta // listaNm[i]
            if ileN > listaNm.count(listaNm[i]):
                pass
            reszta = reszta - ileN * listaNm[i]
            print(f"{ileN} x {listaNm[i]}")
        i += 1


def main(args):
    listaNm = [200, 100, 50, 20, 10, 5, 2, 1]
    listaNm = [200, 200, 100, 100, 50, 50, 20, 10, 2, 2, 1]
    reszta = int(input("Podaj resztę: "))
    wydajReszte(reszta, listaNm)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
