/*
 * euklides.cpp
 */
#include <iostream>
using namespace std;

int pobierzLiczbe() {
    int liczba;
    cout << "Podaj liczbę: " << endl;
    cin >> liczba;
    return liczba;
}

int main(int argc, char **argv)
{
    int a, b;
    a = pobierzLiczbe();
    b = pobierzLiczbe();
    cout << "NWD(" << a << ", " << b << ") = ";
    int licznik = 0;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
        licznik++;
    }
    cout << a << endl;
    cout << "Powtórzeń: " << licznik;
    
    return 0;
}

