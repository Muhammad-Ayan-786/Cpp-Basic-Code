#include<iostream>
using namespace std;

int main() {
    int n = 4;

    // Numbers ...
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << j << " ";

        cout << endl;
    }

    cout << endl;

    // Stars ...
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n; j++)
            cout << "* ";

        cout << endl;
    }

    cout << endl;

    // Characters ...
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++, ch++)
            cout << ch << " ";

        cout << endl;
    }

    return 0;
}