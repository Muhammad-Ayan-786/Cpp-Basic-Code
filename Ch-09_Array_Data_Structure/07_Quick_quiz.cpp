/*
1) WAF to calculate the sum & product of all numbers of an array.
2) WAF to swap the max and min number of an array.
3) WAF to print all the unique numbers of an array.
4) WAF to print intersection of 2 arrays.
*/

#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void sum_and_product (int arr[], int size) {
//     printArray(arr, size);
//     sumFUNC(arr, size);

//     productFUNC(arr, size); 
//     printArray(arr, size);
// }

int sumFUNC (int sumArr[], int s) {
    int sumArrVal = 0;
    
    for (int i = 0; i < s; i++) {
        sumArrVal += sumArr[i];
    }

    return sumArrVal;
}

int productFUNC (int productArr[], int s) {
    int prodArrVal = 1;

    for (int i = 0; i < s; i++) {
        prodArrVal *= productArr[i];
    }

    return prodArrVal;
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);

    int sumVal = sumFUNC(arr, size);
    int prodVal = productFUNC(arr, size);

    cout << sumVal << endl;
    cout << prodVal << endl;

    return 0;
}