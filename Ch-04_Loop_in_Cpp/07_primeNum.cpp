/* Check if a number is prime or not. */

#include<iostream>
using namespace std;

int main() {
    int n = 6;
    int isPrime = 1;

    for (int i = 2; i <= n-1; i++)
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