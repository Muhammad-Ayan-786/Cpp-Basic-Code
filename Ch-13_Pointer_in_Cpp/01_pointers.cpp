#include<iostream>
using namespace std;

/*
HEXADECIMAL:
Hexadecimal is a base-16 number system that uses the digits 0-9 and the letters A-F to represent values.

Address Operator (&):
The address operator (&) is used to obtain the memory address of a variable in C++. When you place the & operator before a variable name, it returns the address where that variable is stored in memory.

Dereferencing Operator (*):
The dereferencing operator (*) is used to access the value stored at a specific memory address. When you place the * operator before a pointer variable, it returns the value stored at the address that the pointer is pointing to.

*/

int main() {
    int a = 10;

    cout << &a << endl; // Prints the address of variable a in Hexadecimal format.

    int* ptr = &a; // Pointer ptr holds the address of variable a

    cout << ptr << endl; // Prints the address stored in pointer ptr (address of a)

    cout << &ptr << endl; // Prints the address of pointer ptr itself

    return 0;
}