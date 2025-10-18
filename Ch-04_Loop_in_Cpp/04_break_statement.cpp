#include<iostream>
using namespace std;

int main() {
    int n = 50;
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
        if(i == 5) {
            break; // Exit the loop when i is 5
        }
        cout << i << " ";
    }

    cout << "\nSum: " << sum << endl;

    return 0;
}