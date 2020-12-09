/*
 * cw2tab.cpp
 */
#include <iostream>
#include <iomanip>

using namespace std;

void wypelnij(int t[][10], int w, int k, int n) {
    srand(time(NULL));
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            t[i][j] = rand() % (n + 1);
            cout << i << "," << j << " " << t[i][j] << endl;
        }
    }
}

void sumujW(int t[][10], int w, int k) {
    int sumaW = 0;
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            cout << setw(4) << t[i][j];
            sumaW += t[i][j];
        }
        cout << setw(6) << sumaW << endl;
    }
    // wydrukuj maksymalną sumę oraz indeks wiersza
}

void sumujK(int t[][10], int w, int k) {
    ;
    // wydrukuj maksymalną sumę oraz indeks kolumny
}

int main(int argc, char **argv)
{
    int n = 0;
    cout << "Podaj wartość maksymalną: ";
    cin >> n;
    
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    sumujW(tab, w, k);
    sumujK(tab, w, k);
	return 0;
}

