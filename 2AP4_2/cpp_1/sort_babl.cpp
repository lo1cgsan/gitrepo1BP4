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

/* 0 1 2 3 4 5 6 7 – indeksy liczb
 * 6 5 3 1 8 7 2 4
 * 5 6 3
 * 5 3 6 1
 * 5 3 1 6 8
 * 5 3 1 6 8 7
 * 5 3 1 6 7 8 2
 * 5 3 1 6 7 2 8 4
 * 5 3 1 6 7 2 4 8
 *
 * 3 1 5 6 2 4 7 8
 * 1 3 5 2 4 6 7 8
 * 1 3 2 4 5 6 7 8
 */

void zamien(int t[], int i) {
	int tmp = t[i+1];
	t[i+1] = t[i];
	t[i] = tmp;
}

void sort_bubble(int t[], int r) {
	int i, j;
	for (j = r-1; j > 0; j--) {
		for (i = 0; i < j; i++) {
			if (t[i] > t[i+1]) {
				zamien(t, i);
			}
		}
	}
}


int main(int argc, char **argv) {
	int r = 10;
	int maks = 100;
	int tab[r];
	wypelnij(tab, r, maks);
	drukuj(tab, r);
	sort_bubble(tab, r);
	drukuj(tab, r);
	return 0;
}