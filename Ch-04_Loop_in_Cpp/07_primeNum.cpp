/* Check if a number is prime or not. */

#include<iostream>
using namespace std;

int main() {
    int n = 6;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << n << " It's Prime." << endl;
    }
    else {
        cout << n << " It's not Prime." << endl;
    }

    return 0;
}