/*
 * zasieg.cpp
 */

#include <iostream>
using namespace std;

int suma = 0; // zasięg globalny


void drukuj(int liczba) {
    cout << suma << endl;
    liczba += 7;
    //cout << &liczba << endl;
    cout << liczba << endl;
}

void drukuj2(int &liczba) {
    cout << suma << endl;
    liczba += 7;
    cout << &liczba << endl;
    cout << liczba << endl;
}

int main(int argc, char **argv)
{
    int suma = 5; // zmienną lokalna
    int liczba = 3;
    suma += 10;
	cout << suma << endl;
    cout << liczba << endl;
    cout << &liczba << endl;
    drukuj(liczba); // by value
    drukuj2(liczba);  // by reference
    cout << liczba << endl;
	return 0;
}

