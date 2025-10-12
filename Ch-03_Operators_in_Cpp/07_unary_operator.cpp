#include<iostream>
using namespace std;

int main() {
    int a = 10;
    // int b = a++; // kaam ; update
    int b = ++a; // update ; kaam
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    int c = 10;
    // intdb = c--; // kaam ; update
    int d = --c; // update ; kaam
    cout << "d = " << d << endl;
    cout << "c = " << c << endl;

    /*
        post-increment = a++ -> kaam;update
        pre-increment = ++a -> update;kaam

        post-decrement = a-- -> kaam;update
        pre-decrement = --a -> update;kaam
    */

    return 0;
}