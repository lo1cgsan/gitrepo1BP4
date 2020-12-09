/*
 * czynniki.cpp
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

void czynniki(int n) {
    // rozkład na czynniki pierwsze
    int c = 2; // pierwsza liczba pierwsza
    while (n > 1) {
        while (n % c == 0) {
            cout << n << " / " << c << endl;
            n = n / c;
        }
        c++;
    }
    cout << n << endl;
}

void czynniki2(int n) {
    // rozkład na czynniki pierwsze zoptymalizowany
    int c = 2; // pierwsza liczba pierwsza
    int pierw = sqrt(n);
    while (n > 1 && c <= pierw) {
        while (n % c == 0) {
            cout << n << " / " << c << endl;
            n = n / c;
        }
        c++;
    }
    if (n > 1)
        cout << n << " / " << n << endl;
}

int main(int argc, char **argv) {
    int n;  // liczba, którą rozkładamy na czynniki pierwsze
    cout << "Podaj liczbę: ";
    cin >> n;
    czynniki(n);
    cout << endl << endl;
    czynniki2(n);
	return 0;
}
