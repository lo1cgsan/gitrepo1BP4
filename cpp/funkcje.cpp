/*
 * funkcje.cpp
 */

#include <iostream>
using namespace std;

int liczba1 = 10; // zmienna globalna

void drukuj() {
    cout << liczba1 << endl;
}

// funkcja otrzymuje parametr przekazany przez wartość (int liczba1)
// funkcja otrzymuje parametr przekazany przez referencję (int &liczba1)
void drukuj2(int &a) {
    cout << liczba1 << endl;
    a = 0;
}

int drukuj3(int x) {
    cout << liczba1 << endl;
    cout << x << endl;
    x = x * 3;
    return x;
}

int main(int argc, char **argv) {
	int liczba1 = 20; // zmienna lokalna
    //cout << liczba1 << endl;
    liczba1 = liczba1 + 5;
    //drukuj();

    //drukuj2(liczba1);
    //cout << liczba1 << endl;

    liczba1 = drukuj3(liczba1);
    cout << liczba1 << endl;
	return 0;
}

