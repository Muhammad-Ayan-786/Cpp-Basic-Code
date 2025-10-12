#include<iostream>
using namespace std;

int main() {
    /*
    Division in different Datatypes :

    int & int = int;

    int & float = float;    
    float & int = float;    

    int & double = double;    
    double & int = double; 
    */

    int a = 5;
    double b = 2;
    cout << (a / b) << endl;

    // Type-Casting
    cout << (5 / (double)2) << endl;

    int ans = (5 / (double)2);
    cout << ans << endl;

    return 0;
}