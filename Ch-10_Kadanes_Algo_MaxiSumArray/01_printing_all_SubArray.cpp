#include<iostream>
using namespace std;

int main() {
    // Printing all subarrays of the given array brutefully.

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int st = 0; st < n; st++) // starting point
    {
        for (int end = st; end < n; end++) // ending point
        {
            for (int i = st; i <= end; i++) // printing subarray
            {
                cout << arr[i]; // print element at index i
            }
            cout << " "; // space after each subarray
        }
        cout << endl; // new line after all subarrays starting with 'st' are printed
    }

    return 0;
}