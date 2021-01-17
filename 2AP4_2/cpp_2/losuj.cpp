/*
 * losuj.cpp
 * 
 */

#include <iostream>
using namespace std;


void losuj1(int t[], int n, int a, int b) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		// t[i] = rand() % (b + 1); // losowanie liczb <0;b>
		t[i] = a + rand() % (b - a + 1); // zakres <a;b>
	}
}


void drukuj1(int t[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << t[i] << " ";
	}
	cout << endl;
}


int main(int argc, char **argv)
{
	int n, a, b;  // deklaracja ilości liczb oraz granic zakresów
	n = a = b = 0;
	cout << "Ile liczb wylosować: ";
	cin >> n;
	cout << "Podaj zakres: ";
	cin >> a >> b;
	int t[n];  // deklaracja tablicy
	losuj1(t, n, a, b);
	drukuj1(t, n);
	return 0;
}

