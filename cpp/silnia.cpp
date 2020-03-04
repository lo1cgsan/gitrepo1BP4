/*
 * silnia.cpp
 */
#include <iostream>
using namespace std;

// 5! = 1 * 2 * 3 * 4 * 5
// 5! = 4! * 5
// 4! = 1 * 2 * 3 * 4
// n! = 1 * ... * n
// n! = (n-1)! * n
// 0! = 1
long silnia_re(int n) {
    if (n == 0)
        return 1;
    else
        return silnia_re(n-1) * n;
}

int main(int argc, char **argv)
{
	int n;
    cout << "Podaj liczbę: ";
    cin >> n;
    cout << n << "! = " << silnia_re(n) << endl;
	return 0;
}

