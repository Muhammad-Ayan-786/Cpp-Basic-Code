#include<iostream>
using namespace std;

// Brute Force Approach to find Majority Element in an array
// Time Complexity: O(n^2)
void findMajorityElementBruteForce(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        int freq = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        if (freq > (n/2)) {
            cout << "Majority element found: " << arr[i] << endl;
            return;
        }
    }

    cout << "No Majority element found" << endl;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMajorityElementBruteForce(arr, n);

    return 0;
}