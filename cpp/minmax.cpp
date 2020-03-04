/*
 * minmax.cpp
 */
#include <iostream>
using namespace std;

// napisz funkcję wyszukaj, która szuka w tablicy podanej liczby
// i zwraca indeks, jeżeli liczba zostanie znaleziona lub wartość
// -1 w przeciwnym razie

int main(int argc, char **argv)
{
	int tab[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 101;
        cout << tab[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Podaj szukaną liczbę: ";
    cin >> n;
    cout << wyszukaj(tab, n);
	return 0;
}

