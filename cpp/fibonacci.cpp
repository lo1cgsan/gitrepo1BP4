/*
 * fibonacci.cpp
 */

#include <iostream>
using namespace std;

// F(n) = 1 dla n {0, 1}
// F(n) = F(n-1) + F(n-2) dla n > 1

int fib_re(int n) {
    if (n < 2)
        return 1;
    else
        return fib_re(n-1) + fib_re(n-2);
}

/*
F(4) = F(3) + F(2)
F(3) = F(2) + F(1)
F(2) = F(1) + F(0)
F(2) = F(1) + F(0)
F(2) = 1 + 1
F(2) = 1 + 1
F(3) = 2 + 1
F(4) = 3 + 2
F(4) = 5
*/

int main(int argc, char **argv)
{
    int n;
    cout << "Który wyraz: ";
    cin >> n;
    cout << "F(" << n << ") = " << fib_re(n) << endl;
    
    for (int i=0; i<25; i++) {
        cout << (float)fib_re(i+1) / fib_re(i) << endl;
    }
    return 0;
}

