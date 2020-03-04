/*
 * cw2tab.cpp
 */
#include <iostream>
#include <iomanip>

using namespace std;

void wypelnij(int t[][10], int w, int k, int n) {
    // generator liczb pseudolosowych
    srand(time(NULL));
    // <0;n>
    for(int i=0; i<w; i++) { // indeksy wierszy
        for(int j=0; j<k; j++) {
            t[i][j] = rand() % (n + 1);
            cout << i << ", " << j << " " << t[i][j] << endl;
        }
    }
}

void sumujW(int t[][10], int w, int k) {
    int sumaW = 0;
    int maksW = 0;
    int indeks = 0;
    for(int i=0; i<w; i++) { // indeksy wierszy
        for(int j=0; j<k; j++) { // indeksy kolumn
            cout << setw(4) << t[i][j] << " ";
            sumaW += t[i][j];
        }
        if (sumaW > maksW) {
            maksW = sumaW;
            indeks = i;
        }
        cout << setw(6) << sumaW << endl;
        sumaW = 0;
    }
    cout << "Maks. suma: " << maksW << ", wiersz: " << indeks << endl;
}

void sumujK(int t[][10], int w, int k) {
    int sumaK = 0;
    for(int i=0; i<k; i++) { // indeksy kolumny
        for(int j=0; j<w; j++) { //indeksy wiersza
            // cout << j << ", " << i << " " << endl;
            sumaK += t[j][i];
        }
        cout << setw(6) << sumaK << endl;
        sumaK = 0;
    }
    // wydrukuj najw. sumę i indeks kolumny
}

int main(int argc, char **argv) {
	int n;
    cout << "Podaj wartość maksymalną: " << endl;
    cin >> n;
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    sumujW(tab, w, k);
    sumujK(tab, w, k);
    //cout << sumujWiersze() << endl;
    //cout << sumujKolumny() << endl;
	return 0;
}

