#include<iostream>
using namespace std;

int main() {
    {
    // Bitwise And Operator (&) :
        cout << "Bitwise ( & )" << endl;
        int a = 4, b = 8;
        cout << "Decimal : " << (a & b) << endl;
    }

    cout << endl;

    {
    // Bitwise Or Operator (|) :
        cout << "Bitwise ( | )" << endl;
        int a = 4, b = 8;
        cout << "Decimal : " << (a | b) << endl;
    }

    cout << endl;

    {
    // Bitwise Exclusice-Or (XOr) Operator (^) :
        cout << "Bitwise ( ^ )" << endl;
        int a = 4, b = 8;
        cout << "Decimal : " << (a ^ b) << endl;
    }

    cout << endl;

    {
    // Bitwise Left-Shift Operator (<<) :
        cout << "Bitwise ( << )" << endl;
        cout << "Decimal : " << (4 << 1) << endl;
        cout << "Decimal : " << (10 << 2) << endl;
    }

    cout << endl;

    {
    // Bitwise Right-Shift Operator (>>) :
        cout << "Bitwise ( >> )" << endl;
        cout << "Decimal : " << (10 >> 1) << endl;
        cout << "Decimal : " << (8 >> 2) << endl;
    }

    return 0;
}