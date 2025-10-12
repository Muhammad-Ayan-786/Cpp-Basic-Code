#include<iostream>
using namespace std;

int main() {
    cout << !(3 < 1) << endl; // true -> 1
    cout << !(3 > 1) << endl; // true -> 0

    cout << ((3 > 1) || (3 > 5)) << endl; // true -> 1
    cout << ((3 < 1) || (3 > 5)) << endl; // false -> 0

    cout << ((3 > 1) && (3 > 2)) << endl; // true -> 1
    cout << ((3 < 1) && (3 > 2)) << endl; // false -> 0


    /*
        OR                   and
     1 | 2 | Res         1 | 2 | Res
     T | T | T           T | F | F
     T | F | T           F | T | F
     F | F | T           F | F | F
     F | F | F           T | T | T
    */

    return 0;
}