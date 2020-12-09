/*
 * petlafor.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int start, stop, suma;
    cout << "Podaj początek i koniec przedziału:" << endl;
    cin >> start;
    cin >> stop;
    
    if (start % 2 == 1)
        start++;
        
    while (stop <= start) {
        cout << "Podaj poprawny koniec przedziału:" << endl;
        cin >> stop;
    }
    
    suma = 0;
    for(int i = start; i < stop+1; i = i + 2) {
        cout << i << endl;
        suma = suma + i;
    }
    
    cout << suma;
    
	return 0;
}

