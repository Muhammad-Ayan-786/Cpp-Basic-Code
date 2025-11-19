#include<iostream>
using namespace std;

int main() {
    int* ptr = NULL; // NULL pointer to an integer

    cout << *ptr << endl; // Cannot dereference NULL pointer, will cause runtime error.

    cout << ptr << endl; // Printing the NULL pointer itself

    return 0;
}