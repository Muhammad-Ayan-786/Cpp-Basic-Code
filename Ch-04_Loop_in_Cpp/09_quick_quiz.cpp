/*
1) Sum of all numbers from  1 to N which are divisible by 3.

2) Print Factorial of a number N.
*/

#include<iostream>
using namespace std;

int main() {

    // Code for problem 1 ...
    int n1;
    cout << "Enter number: ";
    cin >> n1;

    int sum = 0;

    for (int i = 1; i <= n1; i++)
    {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    
    cout << "Sum: " << sum << "\n\n";


    // Code for problem 2 ...
    int n2;
    cout << "Enter number: ";
    cin >> n2;

    int factorial = 1;

    for (int i = 1; i <= n2; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}