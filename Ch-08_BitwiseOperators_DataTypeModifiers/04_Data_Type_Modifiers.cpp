#include <iostream>
using namespace std;

int main() {
    // Displaying the size of different integer types in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;

    // -------------------------------
    // Signed integers
    // -------------------------------
    // Can store both positive and negative numbers
    // The leftmost bit (MSB) is used as the sign bit:
    // 0 = positive, 1 = negative
    signed int n = -2;
    signed int m = 2;

    cout << "Signed int examples: " << n << ", " << m << endl;

    // -------------------------------
    // Unsigned integers
    // -------------------------------
    // Can store only positive numbers (and zero)
    // All bits are used for value (no sign bit)
    unsigned int p = 4;

    cout << "Unsigned int example: " << p << endl;

    return 0;
}
