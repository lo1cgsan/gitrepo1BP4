/*
 * suma.cpp
 * 
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma = 0;
    int i = 0;
    int n = 0;
    int a = 0;
    // int suma, i, n, a;
    // suma = i = n = a = 0;
    cout << "Ile liczb chcesz zsumować? ";
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        cout << "Podaj liczbę: ";
        cin >> a;
        suma = suma + a;
    }

    cout << suma;
    return 0;
}

