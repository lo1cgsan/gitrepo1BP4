/*
 * rownanie.cpp
 *  Rozwiąż równanie liniowe: a * x + b = 0
 *  
 *  1) Pobierz wartości współczynników a i b.
 *  2) Jeśli a = 0,
 *         jeśli b = 0, wyprowadź "nieskończenie wiele rozwiązań"
 *         w przeciwnym wypadku wyprowadź: "równanie sprzeczne"
 *    w przeciwnym wypadku oblicz x = -b / a i wyprowadź x
 * 
 * 
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int a;
    int b;
    float x;
    cout << "Witaj w C++";
    cout << "Podaj liczbę a: ";
    cin >> a;
    cout << "Podaj liczbę b: ";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "nieskończenie wiele rozwiązań";
        } else {
            cout << "równanie sprzeczne";
        }
    } else {
        x = -b / (float)a;
        cout << x;
    }
    return 0;
}

