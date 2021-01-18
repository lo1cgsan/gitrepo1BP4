/*
 * losuj.cpp
 * 
 */

#include <iostream>
using namespace std;

void losuj1(int t[], int r)
{
	srand(time(NULL));  // inicjacja generator liczb pseudolosowych
	
	for (int i=0; i < r; i++)
	{
		t[i] = rand() % (r + 1); // losowanie liczb z zakresu <0;r>
	}
}

void losuj2(int t[], int r)
{
	int a = 0;
	int b = 0;
	while (a >= b)
	{
		cout << "Podaj lewy zakres: ";
		cin >> a;
		cout << "Podaj prawy zakres: ";
		cin >> b;
	}
	
	srand(time(NULL));  // inicjacja generator liczb pseudolosowych
	
	for (int i=0; i < r; i++)
	{
		t[i] = a + rand() % (b - a + 1); // losowanie liczb całkowitych z zakresu <a;b>
	}
}

void drukuj(int t[], int r)
{
	for (int i=0; i < r; i++)
	{
		cout << t[i] << " ";
	}
	cout << endl;
}

void losuj3(float t[], int r)
{
	int a = 0;
	int b = 0;
	while (a >= b)
	{
		cout << "Podaj lewy zakres: ";
		cin >> a;
		cout << "Podaj prawy zakres: ";
		cin >> b;
	}
	
	srand(time(NULL));  // inicjacja generator liczb pseudolosowych
	
	for (int i=0; i < r; i++)
	{
		t[i] = ((float)rand()/RAND_MAX) * (b - a); // losowanie liczb rzeczywistych z zakresu <0;b>
	}
}

void drukuj3(float t[], int r)
{
	for (int i=0; i < r; i++)
	{
		cout << t[i] << " ";
	}
	cout << endl;
}

int main(int argc, char **argv)
{
	cout << "Ile liczb wylosować? ";
	int ile = 0;
	cin >> ile;
	int tab[ile];  // deklaracja tablicy
	// losuj1(tab, ile);
	// losuj2(tab, ile);
	float tab2[ile];
	losuj3(tab2, ile);
	drukuj3(tab2, ile);
	return 0;
}

