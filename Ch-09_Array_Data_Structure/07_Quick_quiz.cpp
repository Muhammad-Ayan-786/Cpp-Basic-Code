/*
1) WAF to calculate the sum & product of all numbers of an array.
2) WAF to swap the max and min number of an array.
3) WAF to print all the unique numbers of an array.
4) WAF to print intersection of 2 arrays.
*/

#include<iostream>
using namespace std;

// Global & Helper function to print array.
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Problem 1 Function ...
// 🔹 Function declarations (prototypes)
int sumFUNC(int[], int);
int productFUNC(int[], int);

// Problem 1 Function ...
void sum_and_product (int arr[], int size) {
    int sumVal = sumFUNC(arr, size);
    int prodVal = productFUNC(arr, size);

    cout << "Sum: " << sumVal << endl;
    cout << "Product: " << prodVal << endl;
}

// Problem 1 Function ...
int sumFUNC (int sumArr[], int s) {
    int sumArrVal = 0;
    
    for (int i = 0; i < s; i++) {
        sumArrVal += sumArr[i];
    }

    return sumArrVal;
}

// Problem 1 Function ...
int productFUNC (int productArr[], int s) {
    int prodArrVal = 1;

    for (int i = 0; i < s; i++) {
        prodArrVal *= productArr[i];
    }

    return prodArrVal;
}

int main() {
    // Code for problem 1 ...
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    sum_and_product(arr, size);

    return 0;
}