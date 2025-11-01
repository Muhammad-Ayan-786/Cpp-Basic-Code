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

// Brute Force Approach to find pairs with a given sum.
void findPairWithSum(int arr[], int n, int target){
    printArray(arr, n);
    cout << "Target: " << target << "\n\n";

    for (int fstPair = 0; fstPair < n; fstPair++)
    {
        for (int secPair = (fstPair + 1); secPair < n; secPair++)
        {
            if (arr[fstPair] + arr[secPair] == target)
            {
                cout << "arr[" << fstPair << "]: " << arr[fstPair] << " + " << "arr[" << secPair << "]: " << arr[secPair] << " = " << target << endl;
            }
        }
    }
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findPairWithSum(arr, n, target);

    return 0;
}