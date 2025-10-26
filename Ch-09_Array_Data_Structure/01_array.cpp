#include<iostream>
using namespace std;

int main() {
    // Reserve an array of 50 sizes.
    int marks[50];

    // Array with initiallising.
    int price5[5] = {1, 2, 3, 4, 5};

    // Array with initiallising without giving the size.
    int age[] = {12, 83, 35};

    // Array accessing.
    int n[5] = {10, 20, 30, 40, 50};
    n[0] = 1000;
    cout << n[0] << endl;
    cout << n[1] << endl;
    cout << n[2] << endl;
    cout << n[3] << endl;
    cout << n[4] << endl;

    // 0 to size - 1
    cout << n[34] << endl; // Garbage value

    return 0;
}