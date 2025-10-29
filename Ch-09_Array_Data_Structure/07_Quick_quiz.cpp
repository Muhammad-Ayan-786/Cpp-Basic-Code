/*
1) WAF to calculate the sum & product of all numbers of an array.
2) WAF to swap the max and min number of an array.
3) WAF to print all the unique numbers of an array.
4) WAF to print intersection of 2 arrays.
*/

#include<iostream>
#include<climits> // For INT_MIN, INT_MAX
using namespace std;

// Global & Helper function to print array.
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

// Problem 1 Function ...
// 🔹 Function declarations (prototypes)
int sumFUNC(int[], int);
int productFUNC(int[], int);

// Problem 1 Function ...
void sum_and_product (int arr[], int size) {
    int sumVal = sumFUNC(arr, size);
    int prodVal = productFUNC(arr, size);

    cout << "Sum: " << sumVal << endl;
    cout << "Product: " << prodVal << endl;
}

// Problem 1 Function ...
int sumFUNC (int sumArr[], int s) {
    int sumArrVal = 0;
    
    for (int i = 0; i < s; i++) {
        sumArrVal += sumArr[i];
    }

    return sumArrVal;
}

// Problem 1 Function ...
int productFUNC (int productArr[], int s) {
    int prodArrVal = 1;

    for (int i = 0; i < s; i++) {
        prodArrVal *= productArr[i];
    }

    return prodArrVal;
}



// Problem 2 Function ...
void swapMinMax (int arr[], int size) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int minIndex;
    int maxIndex;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            minIndex = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            maxIndex = i;
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Smallest element index: " << minIndex << endl;

    cout << "Largest element: " << largest << endl;
    cout << "Largest element index: " << maxIndex << endl;

    // Swaping the min value & max value with each other.
    swap(arr[minIndex], arr[maxIndex]);
}



// Problem 3 Function ...
void printUniqueNumbers (int arr[], int size) {
    cout << "Unique numbers in the array are: ";
    for (int i = 0; i < size; i++) {

        for (int j = i; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << arr[j] << " ";
            }
        }
    }

    cout << endl;
}

int main() {
    // Code for problem 3 ...
    cout << "Problem 3:" << endl;
    int arr3[] = {2, 3, 8, 5, 2, 4};
    int size3 = sizeof(arr3) / sizeof(int);

    printArray(arr3, size3);
    printUniqueNumbers(arr3, size3);






    /*
    // Code for problem 1 ...
    cout << "Problem 1:" << endl;
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    sum_and_product(arr, size);

    cout << endl;
    */

    /*
    // Code for problem 2 ...
    cout << "Problem 2:" << endl;
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(int);

    printArray(arr2, size2);
    cout << endl;
    swapMinMax(arr2, size2);
    cout << endl;
    printArray(arr2, size2);

    cout << endl;
    */

    return 0;
}