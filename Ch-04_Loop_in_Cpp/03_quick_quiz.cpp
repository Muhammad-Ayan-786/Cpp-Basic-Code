/*
Sum of number from 1 to n.
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << "The sum of the numbers are " << sum << endl;

    return 0;
}