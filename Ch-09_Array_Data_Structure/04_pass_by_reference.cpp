#include<iostream>
using namespace std;

void changeArray(int arr[], int size) {
    cout << "In function: " << endl;
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int myArray[] = {1, 2, 3};
    int size = sizeof(myArray) / sizeof(myArray);

    changeArray(myArray, size);

    cout << "In main: ";
    for(int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}