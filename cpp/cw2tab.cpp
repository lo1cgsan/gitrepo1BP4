/*
 * cw2tab.cpp
 */
#include <iostream>
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

int main(int argc, char **argv) {
	int n;
    cout << "Podaj wartość maksymalną: " << endl;
    cin >> n;
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    cout << sumujWiersze() << endl;
    cout << sumujKolumny() << endl;
	return 0;
}

