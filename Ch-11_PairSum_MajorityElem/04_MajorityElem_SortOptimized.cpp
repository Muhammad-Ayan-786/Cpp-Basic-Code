#include<iostream>
#include <algorithm>
using namespace std;

// Function to find the majority element in an array
void findMajorityElement(int arr[], int n) {
    // Sort the array
    sort(arr, arr + n);

    int freq = 1;
    int ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            freq++;
        else
        {
            freq = 1;
            ans = arr[i];
        }

        if (freq > (n / 2))
        {
            cout << "Majority Elem: " << arr[i] << endl;
            break;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMajorityElement(arr, n);

    return 0;
}