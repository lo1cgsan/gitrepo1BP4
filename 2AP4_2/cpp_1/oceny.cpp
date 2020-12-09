/*
 * oceny.cpp
 */


#include <iostream>
using namespace std;


void pobierzOceny(int tb[], int n) {
    int ocena = 0;
    int i = 0;
    while (n > 0) {
        cout << "Podaj ocenę: ";
        cin >> ocena;
        if (ocena > 0 && ocena < 7) {
            tb[i] = ocena;
            i++;
            n--;
        }
    }
}

float liczSrednia(int tb[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        // cout << tb[i] << " ";
        suma = suma + tb[i];
    }
    return (float)suma / (float)n;
}

int main(int argc, char **argv) {
    int n;
    cout << "Ile podasz ocen?";
    cin >> n;
    int oceny[n];
    pobierzOceny(oceny, n);
    // float srednia = liczSrednia(oceny, n);
    cout << "Średnia ocen: " << liczSrednia(oceny, n) << endl;
    return 0;
}

