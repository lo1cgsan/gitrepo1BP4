/*
 * cw1tab.cpp
 */
#include <iostream>
using namespace std;

void pobierzLiczby(int t[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbę: ";
        cin >> t[i];
    }
}

void drukuj(int t[], int n) {
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    int n = 5;
    int t1[n];
    int t2[n];
    pobierzLiczby(t1, n);
    pobierzLiczby(t2, n);
    drukuj(t1, n);
    drukuj(t2, n);
    int s1 = sumujTab(t1, n);
    int s2 = sumujTab(t2, n);
    
	return 0;
}

