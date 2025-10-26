#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int sizeInBytes = sizeof(arr); // Print size in bytes
    cout << "Size of array in bytes: " << sizeInBytes << endl;

    int arrSizeInt = sizeof(arr) / sizeof(int); // Calculate total number of elements.
    cout << "Total number of elements in array: " << arrSizeInt << endl;

    // Loop : 0 to size - 1
    for (int i = 0; i < arrSizeInt; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\n";

    // Add elements in age from the user input.
    int size = 5;
    int age[size];

    cout << "Enter ages: ";
    for (int i = 0; i < size; i++)
        cin >> age[i];
    
    for (int i = 0; i < size; i++)
        cout << age[i] << " ";

    return 0;
}