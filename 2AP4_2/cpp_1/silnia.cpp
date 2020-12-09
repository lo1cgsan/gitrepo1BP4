/*
 * silnia.cpp
 * 0! = 1! = 1
 * 2! = 1 * 2 = 2
 * 5! = 1 * 2 * 3 * 4 * 5 = 120
 * 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720
 * 
 * n! = 1 dla n = {0, 1}
 * n! = 1*...*n dla n = N+-{1}
 */
#include <iostream>
using namespace std;

long silnia_it(int n) {
    long s = 1;
    for (int i=2; i<=n; i++) {
       s *= i;
    }
    return s;
}

/*
 * n! = 1 dla n = 0
 * 1! = 0! * 1
 * 2! = 1! * 2
 * 3! = 2! * 3
 * n! = (n-1)! * n
 */

long silnia_re(int n) {
    if (n == 0)
        return 1;
    else
        return silnia_re(n-1) * n;
}
 
int main(int argc, char **argv)
{
	// 1. pobierz n
    int n;
    cout << "Podaj liczbę: ";
    cin >> n;
    // 2. przekaż n do funkcji silnia_it() i wydrukuj zwrócony wynik
    cout << n << "! = " << silnia_it(n);
    cout << endl;
    cout << n << "! = " << silnia_re(n);
	return 0;
}

