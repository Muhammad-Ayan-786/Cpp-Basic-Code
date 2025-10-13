/*
1) Find character lowercase or uppercase.
*/

#include<iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z') {
        cout << "Your character is in LOWERCASE." << endl;
    }
    else {
        cout << "Your character is in UPPERCASE." << endl;
    }

    return 0;
}