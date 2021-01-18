/*
 * losuj.cpp
 * Program losuje określoną przez użytkownika liczbę liczb całkowitych
 * z zadanego zakresu.
 */

#include <iostream>
//#include <cstdlib>
#include <cmath>

using namespace std;

void pobierzZakres(int &a, int &b)
{
	cout << "Podaj zakres: ";
	while(a >= b){
		cin >> a >> b;
		if (a >= b) {
			cout << "Błędne dane!" << endl;
		}
	}
}

void losuj1(float tab[], int n, int a, int b)
{
	// cout << time(NULL) << endl;
	srand(time(NULL));
	for(int i = 0; i < n; i++) {
		// tab[i] = rand() % (b + 1); // losowanie z zakresu <0;b>
		// tab[i] = a + rand() % (b - a + 1); // losowanie z zakresu <a;b>
		tab[i] = a + ((float)rand()/RAND_MAX) * (b-a); // losowanie liczb rzeczywistych <a;b>
		// cout << tab[i] << " ";
		printf("%12.3f\n", tab[i]);
	}
}


void drukuj1(int tab[], int n)
{
	for(int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}


int main(int argc, char **argv)
{
	// dane wejściowe
	int a, b; // zakres danych
	int n; // liczba liczb do wylosowania
	a = b = n = 0;
	cout << "Ile liczb wylosować? ";
	cin >> n;
	pobierzZakres(a, b);
	float tab[n];
	// losuj1(tab, n, a, b);
	
	cout << endl;
	cout << M_PI << endl;
	printf("%8.3f\n", M_PI);
	
	int li = 100;
	printf("%#x\n", li);
	printf("%#o\n", li);
	
	return 0;
}

