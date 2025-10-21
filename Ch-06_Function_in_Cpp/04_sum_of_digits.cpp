#include<iostream>
using namespace std;

// Sum of digits of a number
int sumOfDigits(int num){
    int digitSum = 0;

    while (num > 0) {
        int lastDigit = num % 10; // % 10 Gives the last digit of a number
        num = num / 10;
        digitSum += lastDigit;
    }

    return digitSum;
}

int main() {
    int num = 2356;
    int digitSum = sumOfDigits(num);

    cout << "The sum digits of " << num << " is : " << digitSum << endl;

    return 0;
}