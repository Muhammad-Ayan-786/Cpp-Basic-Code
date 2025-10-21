// Calculate nCr bionomial coefficient for n & r.

#include<iostream>
using namespace std;

// n Factorial.
int factorial (int facNum) {
    int fac = 1;

    for (int i = 1; i <= facNum; i++)
        fac = fac * i;

    return fac;
}

// nCr Bionomial coefficient.
int nCr_calculate (int n, int r) {
    int facOf_n = factorial(n);
    int facOf_r = factorial(r);

    int nCr = (facOf_n) / (facOf_r * (factorial(n - r)));

    return nCr;
}

int main() {
    int n = 8;
    int r = 2;

    int nCr = nCr_calculate(n, r);

    cout << nCr << endl;

    return 0;
}