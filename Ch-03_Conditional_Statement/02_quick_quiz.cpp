/*
1) Take age from the user, and if the age is greater than 18 - he/she can vote else cannot vote.

2) Take number from the user and check if the number is even or odd. 
*/

#include<iostream>
using namespace std;

int main() {
    // Code for problem 1 :
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You can Vote." << endl;
    } else {
        cout << "You cannot Vote." << endl;
    }

    // Code for problem 2 :
    int num;
    cout << "Enter number: ";
    cin >> age;

    if (num % 2 == 0) {
        cout << "Number is Even." << endl;
    } else {
        cout << "Number is Odd." << endl;
    }

    return 0;
}