/*
1) Sum of all Odd numbers from 1 to n using while loop.

2) Sum of all Even numbers from 1 to n using for loop.
*/

#include<iostream>
using namespace std;

int main() {

    // Code of problem 1 ...
    int i = 1, n = 24;
    int sumOdd = 0;

    while (i <= n) {
        if (i % 2 != 0) {
            sumOdd += i;
            cout << i << " ";
        }
        i++;
    }

    cout << "\nSum odd : " << sumOdd << endl;


    // Code of problem 2 ...
    int num = 25;
    int sumEven = 0;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sumEven += i;
            cout << i << " ";
        }
    }
    
    cout << "\nSum even : " << sumEven << endl;

    return 0;
}