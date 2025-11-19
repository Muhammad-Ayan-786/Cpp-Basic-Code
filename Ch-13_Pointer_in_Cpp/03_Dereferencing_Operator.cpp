#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // Pointer to integer

    int** ptr2 = &ptr; // Pointer to pointer

    cout << *(&a) << endl; // Dereferencing the address of 'a'
    cout << *(ptr) << endl; // Dereferencing the pointer 'ptr'
    cout << **(ptr2) << endl; // Dereferencing the pointer to pointer 'ptr2'

    return 0;
}