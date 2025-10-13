#include<iostream>
using namespace std;

int main() {
    // Ternary Statement :
    // condition ? stt1 : stt2 ;

    int n = 10;

    cout << (n >= 0 ? "Positive" : "Negative") << endl ;

    n >= 0 ? (cout << "Positive\n") : (cout << "Negative\n") ;


    return 0;
}