#include<iostream>
#include<climits> // For INT_MIN
using namespace std;

int maxSumBruteForce(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;

        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);   
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSumBruteForce(arr, n);
    cout << "Max sum of the array: " << maxSum << endl;

    return 0;
}