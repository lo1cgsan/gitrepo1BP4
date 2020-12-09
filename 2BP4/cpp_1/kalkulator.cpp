/*
 * kalkulator.cpp
 * 
 */


#include <iostream>
using namespace std;

float pobierzLiczbe() {
    // kod
    return liczba;
}

int main(int argc, char **argv)
{
	char operacja;
    cout << "Podaj działanie (+, -, /, *): ";
    cin >> operacja;
    switch (operacja) {
        case '+':
        //kod
            pobierzLiczbe()
            pobierzLiczbe()
        break;
        case '-':
        //kod
        break;
        default:
        cout << "Błędne działanie!" << endl;
        break;
    }
	return 0;
}

