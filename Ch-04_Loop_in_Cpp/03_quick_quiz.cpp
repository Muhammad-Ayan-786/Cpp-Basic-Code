/*
1) Sum of number from 1 to n.

2) Sum of all odd numbers from 1 to n.
*/

#include<iostream>
using namespace std;

int main() {
    // Code for problem 1 ...
    int n1 = 10;
    int sum = 0;

    for (int i = 1; i <= n1; i++) {
        sum += i;
    }
    
    cout << "Sum = " << sum << endl;

    // Code for problem 2 ...
    int n2 = 40;
    int sumOfOdd = 0;

    for (int i = 1; i <= n2; i++) {
        if (i % 3 == 0) {
            sumOfOdd += i;
        }        
    }

    cout << "Sum odd : " << sumOfOdd << endl;

    return 0;
}