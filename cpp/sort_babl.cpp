/*
 * sortowanie.cpp
 */
#include <iostream>
using namespace std;

void wypelnij(int t[], int r, int maks) {
    srand(time(NULL));
    for(int i=0; i<r; i++) {
        t[i] = rand() % (maks + 1);
    }
}

void drukuj(int t[], int r) {
    for(int i=0; i<r; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

/* n = 8
 * 0 1 2 3 4 5 6 7 – indeksy liczb
 * 6 5 3 1 8 7 2 4 – tablica liczb do sposorowania
 * 5 6
 * 5 3 6
 * 5 3 1 6
 * 5 3 1 6 8
 * 5 3 1 6 7 8
 * 5 3 1 6 7 2 8
 * 5 3 1 6 7 2 4 8
 * 
 * 3 1 5 6 2 4 7 8
 * 1 3 5 2 4 6 7 8
 */
void zamien(int t[], int i) {
    int tmp = t[i];
    t[i] = t[i+1];
    t[i+1] = tmp;
}

void sort_babl(int t[], int n) {
    int i, j;
    for (j = n - 1;j > 0;j--) {
        for (i = 0;i < j; i++) {
	    if (t[i] < t[i+1])
		zamien(t, i);
	}
    }
}


int main(int argc, char **argv) {
    int n = 10;
    int tab[n];
    int maks = 100;
    wypelnij(tab, n, maks);
    drukuj(tab, n);
    sort_babl(tab, n);
    drukuj(tab, n);
    return 0;
}
