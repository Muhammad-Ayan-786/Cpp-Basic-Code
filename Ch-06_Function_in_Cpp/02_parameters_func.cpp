#include<iostream>
using namespace std;

// Sum of 2 int numbers
int sumInt(int a, int b) { // Parameters.
    int sum = a + b;
    return sum;
}

// Sum of 2 double numbers
double sumDouble(double a, double b) { // Parameters.
    double sum = a + b;
    return sum;
}   

// Min of 2 numbers
int minOfTwo(int a, int b) { // Parameters.
    if (a > b) {
        return b;
    }
    return a;
}

int main() {
    cout << "Sum of int = " << sumInt(3, 5) << endl; // Arguments.
    cout << "Sum of double = " << sumDouble(10.99, 5.56) << endl; // Arguments.
    cout << "Min = " << minOfTwo(3, 6) << endl; // Arguments.

    return 0;
}