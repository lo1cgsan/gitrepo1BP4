import random


def losuj(lista, n, maks):
    """
    Funkcja losuje n liczb z zakresu <0, n>
    i dodaje je do listy.
    """
    for i in range(n):
        lista.append(random.randint(0, maks))


def sort_wstaw(lista, n):
    """
    Funkcja sortuje listę liczb przy użyciu
    algorytmu sortowania przez wstawianie.
    """
    for i in range(1, n):
        el = lista[i]
        j = i - 1
        while j >= 0 and el < lista[j]:
            lista[j + 1] = lista[j]
            j -= 1
        lista[j + 1] = el


def main(args):
    n = int(input('Ile liczb? '))
    maks = 50
    lista = []  # pusta lista
    losuj(lista, n, maks)
    print(lista)  # lista nieposortowana
    sort_wstaw(lista, n)
    print(lista)  # lista posortowana
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
