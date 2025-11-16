#include<iostream>
using namespace std;

// Function to find the maximum area of water that can be contained
int contWithMostWater(int heightArr[], int n) {
    int maxWater = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            int width = (j - i);
            int height = min(heightArr[i], heightArr[j]);
            int area = width * height;
            maxWater = max(area, maxWater);
        }
    }

    return maxWater;
}


int main() {
    int heightArr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(heightArr) / sizeof(heightArr[0]);

    int maxWaterInCont = contWithMostWater(heightArr, n);

    cout << "The maximum amount of water that can store in the container is " << maxWaterInCont << endl;

    return 0;
}