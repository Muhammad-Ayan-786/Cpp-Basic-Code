#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return i;
        }
    }
    cout << "Element not found in the array." << endl;
    return -1;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62, 32, 7, 89, 12, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    linearSearch(arr, n, target);


    return 0;
}