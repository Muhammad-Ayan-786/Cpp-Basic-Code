#include<iostream>
using namespace std;

int main() {
    int n = 4;

    // Method 1 ...
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }

        cout << endl;
    }

    cout << endl;

    // Method 2 ...
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}