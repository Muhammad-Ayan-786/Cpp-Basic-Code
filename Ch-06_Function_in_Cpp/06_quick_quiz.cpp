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
void printPrime (int num) {
    cout << "Prime number: ";
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
    cout << endl;
}

// Code func of 3 ...
int fibonacci (int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int n = 6;

    // Code of 1 ...
    bool primeCheck = checkPrime(n);
    cout << n << (primeCheck ? ": Prime" : ": Not Prime") << endl;

    // Code of 2 ...
    printPrime(n);

    // Code of 3 ...
    cout << "Fibonacci sequence of " << n << " is " << fibonacci(n) << endl;


    return 0;
}