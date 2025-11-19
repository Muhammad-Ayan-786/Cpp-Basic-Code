#include<iostream>
using namespace std;

int main() {
    int a = 10;

    int* ptr = &a; // Pointer to an integer

    int** parentPtr = &ptr; // Pointer to a pointer

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << endl;

    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    cout << endl;

    cout << "Value pointed to by parentPtr: " << *parentPtr << endl;
    cout << "Value pointed to by the pointer pointed to by parentPtr: " << **parentPtr << endl;

    return 0;
}