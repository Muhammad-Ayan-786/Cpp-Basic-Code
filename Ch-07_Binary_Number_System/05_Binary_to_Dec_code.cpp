#include<iostream>
using namespace std;

int Binary_to_Decimal (int binaryN) {
    int decimal = 0;
    int power = 1;

    while (binaryN > 0) {
        int lastDigit = binaryN % 10;
        decimal += lastDigit * power;

        binaryN = binaryN / 10;
        power = power * 2;
    }

    return decimal;
}

int main() {
    int binary = 101010;
    cout << Binary_to_Decimal(binary) << endl;

    return 0;
}