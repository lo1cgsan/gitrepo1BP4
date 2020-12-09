def wydajReszte(reszta, listaNm):
    i = 0  # indeks nominału
    while reszta > 0:
        if reszta >= listaNm[i]:
            ileN = reszta // listaNm[i]
            reszta -= ileN * listaNm[i]
            # print("{} x {} zł".format(ileN, listaNm[i]))
            print(f"{ileN} x {listaNm[i]} zł")
        i += 1


def wydajReszte2(reszta):
    reszta = 59
    listaNm = [200, 100, 100, 20, 5, 5, 2, 1, 1, 1, 1]
    pass


def main(args):
    listaNm = [200, 100, 20, 10, 5, 2, 1]
    reszta = int(input('Podaj resztę: '))
    wydajReszte(reszta, listaNm)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
