/*
 * suma.cpp
 * 
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int suma = 0;
    int i = 0;
    int n = 0;
    int a = 0;
    cout << "Ile podasz liczb? ";
    cin >> n;
    cout << "Podaj liczbę: ";
    for (i = 0; i < n; i = i + 1) {
        cin >> a;
        suma = suma + a;
    }
    cout << suma;

    return 0;
}

