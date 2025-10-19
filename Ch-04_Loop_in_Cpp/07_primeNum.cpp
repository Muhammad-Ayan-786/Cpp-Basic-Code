/* Check if a number is prime or not. */

#include<iostream>
using namespace std;

int main() {
    int n = 6;
    bool isPrime = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        cout << n << " It's Prime." << endl;
    }
    else {
        cout << n << " It's not Prime." << endl;
    }

    return 0;
}