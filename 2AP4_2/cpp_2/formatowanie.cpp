/*
 * formatowanie.cpp
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    float lf = 12.3456789;
    cout << M_PI << endl;
    printf("Liczba Pi: %10.2f\n", M_PI);
    printf("Liczba Pi: %10.4f\n", lf);

    int li = 100;
    printf("Hex: %#x\n", li);
    printf("Oct: %#o\n", li);
    
    return 0;
}

