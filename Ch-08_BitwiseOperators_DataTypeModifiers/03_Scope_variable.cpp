#include <iostream>
using namespace std;

/*
    <--------- SCOPE IN C++ --------->

    There are 2 types of Scope:
        1. Local Scope
        2. Global Scope

    ------------------------------
    1. Local Scope:
       Variables declared inside:
           - if / else statements
           - loops
           - functions
           - any block of code { }
       can only be accessed within that specific block.

    2. Global Scope:
       Variables declared outside all functions.
       They can be accessed from anywhere in the program.
*/

// Initializing the global variable
int global_Var = 1000;

// Function to demonstrate access to global variable
void fun() {
    int z = 3;
    cout << "Printing the global variable value from fun(): " << global_Var << endl;
}

int main() {

    /* ---------------- GLOBAL SCOPE ---------------- */
    cout << "Global variable value: " << global_Var << endl << endl;


    /* ---------------- LOCAL SCOPE ---------------- */

    // Example 1: if-else block
    if (3 > 1)
        int x = 10;
    else
        int y = 20;

    // cout << x << y << endl;  // ❌ Error: ‘x’ & ‘y’ were not declared in this scope
    cout << "Print x, y line will give this error: "
         << "'x' & 'y' were not declared in this scope.\n" << endl;


    // Example 2: loop block
    for (int i = 0; i < 5; i++) {
        int j = 5;
    }

    // cout << i << endl;  // ❌ Error: ‘i’ & ‘j’ were not declared in this scope
    cout << "Print i, j line will give this error: "
         << "'i' & 'j' were not declared in this scope.\n" << endl;


    // Example 3: function block
    fun();
    // cout << z << endl;  // ❌ Error: ‘z’ was not declared in this scope
    cout << "Print z line will give this error: "
         << "'z' was not declared in this scope.\n" << endl;


    // Example 4: block of code
    {
        int a = 1;
    }

    // cout << a << endl;  // ❌ Error: ‘a’ was not declared in this scope
    cout << "Print a line will give this error: "
         << "'a' was not declared in this scope.\n" << endl;

    return 0;
}
