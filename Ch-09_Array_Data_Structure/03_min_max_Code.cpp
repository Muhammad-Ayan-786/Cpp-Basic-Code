/*
Find smallest / largest element in an array
-------------------------------------------
*/

#include<iostream>
#include<climits> // For INT_MAX
using namespace std;

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Method 1: Using INT_MAX
void findSmallestElement_INT_MAX(int arr[], int size) {
    int smallest = INT_MAX; // (+ Infinity) Largest possible value for any integer value.

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest element (Method 1): " << smallest << endl << endl;
}


// Method 2: Using first element of the array
void findSmallestElement_FirstElement(int arr[], int size) {
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest element (Method 2): " << smallest << endl << endl;
}


// min() , max() built-in functions can also be used to find the smallest, largest element in an array.
void find_min_max_Functions(int arr[], int size) {
    int smallest = INT_MAX; // (+ Infinity)
    int largest = INT_MIN; // (- Infinity)

    for (int i = 1; i < size; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    cout << "Smallest element (Using min function): " << smallest << endl;
    cout << "Largest element (Using max function): " << largest << endl << endl;
}

int main() {

    // -------------- Method 1 --------------
    int arr1[] = {5, 15, 22, 1, -15, 24};
    int size1 = 6;

    cout << "Array 1 elements: ";
    printArray(arr1, size1);

    findSmallestElement_INT_MAX(arr1, size1);

    // -------------- Method 2 --------------
    int arr2[] = {5, 7, 3, 24, -6, 34, 0};
    int size2 = 7;

    cout << "Array 2 elements: ";
    printArray(arr2, size2);

    findSmallestElement_FirstElement(arr2, size2);

    // -------------- Using min() and max() functions --------------
    int arr3[] = {12, 3, 45, -5, 0, 19, 27};
    int size3 = 7;

    cout << "Array 3 elements: ";
    printArray(arr3, size3);

    find_min_max_Functions(arr3, size3);

    return 0;
}