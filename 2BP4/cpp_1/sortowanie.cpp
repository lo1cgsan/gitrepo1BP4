/*
 * sortowanie.cpp
 */
#include <iostream>
using namespace std;

void wypelnij(int t[], int roz, int n) {
    srand(time(NULL));
    for(int i=0; i<roz; i++) {
        t[i] = rand() % (n + 1);
    }
}

void drukuj(int t[], int roz) {
    for(int i=0; i<roz; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

void zamien(int t[], int i) {
    int tmp = t[i];
    t[i] = t[i+1];
    t[i+1] = tmp;
}

void sort_bubble(int t[], int roz) {
    int licznik = 0;
    for (int j = roz - 1; j > 0; j--) {
        licznik++;
        for (int i = 0; i < j; i++) {
            // cout << "(" << i << "," << i+1 << ") ";
            licznik++;
            if (t[i] > t[i+1]) {
                zamien(t, i);
            }
        }
        // cout << endl;
    }
    cout << "Licznik: " << licznik << endl;
}

int main(int argc, char **argv)
{
    int roz = 20;
    int maks = 100;
	int tab[roz];
    wypelnij(tab, roz, maks);
    drukuj(tab, roz);
    sort_bubble(tab, roz);
    drukuj(tab, roz);
	return 0;
}

