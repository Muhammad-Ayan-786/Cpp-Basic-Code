#include<iostream>
using namespace std;

// Function to print array.
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0)
            cout << "{";

        if (i == 0); // Do nothing
        else
            cout << ", ";

        cout << arr[i];

        if (i == size - 1)
            cout << "}";
    }

    cout << endl;
}

// Optimized Approach to find pairs with a given sum.
void findPairSum2PointerApproch(int arr[], int n, int target) {
    printArray(arr, n);
    cout << "Target: " << target << "\n\n";

    int i = 0, j = n-1;

    while (i < j)
    {
        int PairSum = arr[i] + arr[j];

        if (PairSum > target) {
            j--;
        }
        else if (PairSum < target) {
            i++;
        }
        else {
            cout << "arr[" << i << "]: " << arr[i] << " + " << "arr[" << j << "]: " << arr[j] << " = " << target << endl;
            break;
        }
    }
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 26;

    findPairSum2PointerApproch(arr, n, target);
   
    return 0;
}