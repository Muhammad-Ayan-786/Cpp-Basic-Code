#include<iostream>
using namespace std;

// Function to find the maximum area of water that can be contained using two-pointer technique.
int containerWithMostWater(int heigthArr[], int n) {
    int maxWater = 0;

    int leftPiller = 0;
    int rightPiller = (n - 1);

    while (leftPiller < rightPiller)
    {
        int width = rightPiller - leftPiller;
        int heigth = min(heigthArr[leftPiller], heigthArr[rightPiller]);
        int currentWaterArea = width * heigth;
        maxWater = max(maxWater, currentWaterArea);

        if (heigthArr[leftPiller] < heigthArr[rightPiller])
        {
            leftPiller++;
        }
        else
        {
            rightPiller--;
        }
    }

    return maxWater;
}

int main() {
    int heigth[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(heigth) / sizeof(heigth[0]);

    int maxWater = containerWithMostWater(heigth, n);

    cout << "The maximum amount of water that can store in the container is " << maxWater << endl;

    return 0;
}