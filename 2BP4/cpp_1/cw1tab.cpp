/*
 * cw1tab.cpp
 */


#include <iostream>

using namespace std;

void pobierzLiczby(int tb[], int n) {
    for(int i=0; i < n; i++) {
        cout << "Podaj liczbę: " << endl;
        cin >> tb[i];
    }
}

void drukuj(int oceny[], int n) {
    for(int i=0; i < n; i++) {
        cout << oceny[i] << " ";
    }
    cout << endl;
}

int sumuj(int t[], int n) {
    int suma = 0;
    for(int i=0; i < n; i++) {
        suma += t[i];
    }
    return suma;
}

int main(int argc, char **argv) {
    int n = 5;
	int tab1[n];
    int tab2[n];
    pobierzLiczby(tab1, n);
    pobierzLiczby(tab2, n);
    drukuj(tab1, n);
    drukuj(tab2, n);
    int s1, s2;
    s1 = sumuj(tab1, n);
    s2 = sumuj(tab2, n);
    if (s1 > s2) {
        cout << "Suma liczb w serii 1 jest większa ";
        cout << "i wynosi: " << s1 << endl;
    } else if (s1 < s2) {
        cout << "Suma liczb w serii 2 jest większa ";
        cout << "i wynosi: " << s2 << endl;
    } else {
        cout << "Sumy liczb w obydwu seriach są różne" << endl;
    }
    return 0;
}
