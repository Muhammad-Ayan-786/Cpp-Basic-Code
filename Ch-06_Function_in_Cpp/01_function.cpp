#include<iostream>
using namespace std;

// Function defination.
int printHello () {
    cout << "Hello" << endl;
    return 3;
}

int main() {

    // Function call / Invoke
    printHello();

    int value = printHello();
    cout << "Val: " << value << endl;
    // OR //
    cout << printHello() << endl;

    return 0;
}