/*
 * kalkulator.cpp
 */

#include <iostream>
using namespace std;

void dodaj() {
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
}

int main(int argc, char **argv)
{
	char operacja;
    cout << "Jakie działanie chcesz wykonać (+, -, *, /)?" << endl;
    cin >> operacja;
    switch(operacja) {
        case '+':
            dodaj();
        break;
        case '-':
            ;
        break;
        default:
            cout << "Nie rozumiem!" << endl;
        break;
    }
	return 0;
}
