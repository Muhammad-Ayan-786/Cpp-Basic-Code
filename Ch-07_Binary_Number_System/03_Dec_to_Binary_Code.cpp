#include<iostream>
using namespace std;

// Conversion of Decimal to Binary number.
int Decimal_to_Binary (int decNum) {
    int binary_Num = 0;
    int power = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;

        binary_Num += (rem * power);
        power = power * 10;
    }

    return binary_Num;
}

// Prints all the Binary from 1 to n;
int print_Binary_Num (int n) {
    for (int i = 1; i <= n; i++) {
        cout << "Decimal: " << i << endl;
        cout << "Binary: " << Decimal_to_Binary(i) << endl;

        cout << endl;
    }
}


int main() {
    int n = 100;

    // Prints all the Binary from 1 to n;
    print_Binary_Num(n);

    /*
    // This only tell the binary number of the given decimal.
        int binaryNum = Decimal_to_Binary(n);
        cout << "Decimal: " << n << endl;
        cout << "Binary: " << binaryNum << endl;
    */

    return 0;
}