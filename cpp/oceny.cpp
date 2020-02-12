/*
 * oceny.cpp
 * 
 */

#include <iostream>
using namespace std;

void pobierzOceny(int tb[], int n) {
    //for(int i=0; i < ile; i++) {
    //    cout << "Podaj ocenę: " << endl;
    //    cin >> tb[i];
    //}
    int ile = 0;
    int ocena;
    while(ile < n) {
        cout << "Podaj ocenę: " << endl;
        cin >> ocena;
        if (ocena > 0 && ocena < 7) {
            tb[ile] = ocena;
            ile++;
        } else {
            cout << "Błędna ocena!" << endl;
        }
    }
}

void drukuj(int oceny[], int n) {
    for(int i=0; i < n; i++) {
        cout << oceny[i] << " ";
    }
    cout << endl;
}

float liczSrednia(int oceny[], int n) {
    int suma = 0;
    for(int i=0; i < n; i++) {
        suma = suma + oceny[i];
    }
    cout << "Suma: " << suma << endl;
    
    return (float)suma / (float)n;
}

int main(int argc, char **argv)
{
    // n = input("Ile ocen: ")
    int n = 0;
    cout << "Ile ocen podasz: " << endl;
    cin >> n;
    int oceny[n]; // deklaracja tablicy liczb całkowitych
    pobierzOceny(oceny, n);
    drukuj(oceny, n);
    cout << "Srednia ocen: " << liczSrednia(oceny, n);
	return 0;
}

