/*
1) WAF to check if a number is a prime or not.
2) WAF to print all the prime numberes from 1 to N.
3) WAF to print nth Fibonacci.

(WAF stands for Write a Function.)
*/

#include<iostream>
using namespace std;

// Code func of 1 ...
bool checkPrime (int num) {
    bool isPrime = true;

    for (int i = 2; i * i <= num ; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

// Code func of 2 ...
void writePrime (int num) {
    for (int i = 2; i <= num; i++) {
        bool isPrime = true;

        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }    
}

int main() {
    int n = 5;

    // Code of 1 ...
    bool primeCheck = checkPrime(n);
    // cout << n << (primeCheck ? ": Prime" : ": Not Prime") << endl;

    writePrime(n);

    return 0;
}