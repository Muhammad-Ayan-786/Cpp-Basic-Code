#include<iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter columns: ";
    cin >> x;
    cout << "Enter rows: ";
    cin >> y;

    for (int row = 1; row <= y; row++)  // rows go down
    {
        for (int col = 1; col <= x; col++) { // columns go across
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}