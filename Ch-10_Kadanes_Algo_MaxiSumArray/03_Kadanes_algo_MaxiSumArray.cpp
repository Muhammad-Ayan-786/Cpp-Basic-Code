#include<iostream>
#include<climits>
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm.
int maxSubArraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = maxSubArraySum(arr, n);

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}