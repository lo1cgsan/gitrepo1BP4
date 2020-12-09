#include <iostream>
#include <cmath>
using namespace std;

void czynniki(int n) {
    int k = 2; //ustawiamy k na pierwszą liczbę pierwszą

    //rozkład liczby na czynniki pierwsze
    while (n > 1) {
        while(n % k == 0) { //dopóki liczba jest podzielna przez k
            cout << n << " / ";
            cout << k << endl;
            n /= k;
        }
        ++k;
    }
}


void czynniki2(int n) {
    int pierw = sqrt(n);
    int k = 2; //ustawiamy k na pierwszą liczbę pierwszą

    //rozkład liczby na czynniki pierwsze
    while (n > 1 && k <= pierw) {
        while (n % k == 0) { //dopóki liczba jest podzielna przez k
            cout << n << " / ";
            cout << k << endl;
            n /= k;
        }
        ++k;
    }

    if (n > 1)
        cout << n;
    cout << endl;
}


int main() {
    int n;

    cout << "Podaj liczbę: ";
    cin >> n;

    cout << "Czynniki pierwsze liczby " << n << ":\n";

    czynniki(n);
    cout << endl << endl;
    czynniki2(n);

    return 0;
}