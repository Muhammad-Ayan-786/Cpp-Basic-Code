/*
1) Figure out how to find if a number is power of 2.

2) WAF to reverse an Integer n.
*/

#include<iostream>
using namespace std;

// Check func if n is power of 2;
bool powerCheck (int num) {
    int power = 1;

    for (int i = 1; power <= num; i++, power *= 2)
        if (num == power) return true;

    return false;
}

// Reverse func Integer
int reverseInt (int num) {
    int revNum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        revNum = (revNum * 10) + lastDigit;
        num = num / 10;
    }

    return revNum;
}

int main() {
    // Code for 1 ...
    int n1 = 5;
    int powerOf2 = powerCheck(n1);

    if (powerOf2 == true)
        cout << n1 << " is power of 2." << endl;
    else
        cout << n1 << " is not power of 2." << endl;


    // Code for 2 ...
    int n2 = 123;
    int revNum = reverseInt(n2);
    cout << "Reverse number : " << revNum << endl;

    return 0;
}