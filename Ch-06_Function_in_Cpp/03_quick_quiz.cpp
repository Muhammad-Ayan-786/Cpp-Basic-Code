/*
1) Calculate the numbers from 1 to N.
2) Calculate N Factorial.
*/

// Code for 1 ...
int sumOfN(int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (i+1);
    }

    return sum;
}

// Code for 2 ...
int factorial(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    return factorial;
}

#include<iostream>
using namespace std;

int main() {
    // Code for 1 ...
    cout << sumOfN(10) << endl;

    // Code for 2 ...
    cout << factorial(5) << endl;

    return 0;
}