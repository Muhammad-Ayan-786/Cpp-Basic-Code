#include<iostream>
using namespace std;

int MJElem_MooresAlgo(int arr[], int n) {
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
            ans = arr[i];

        if (ans == arr[i])
            freq++;
        else
            freq--;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans)
            count++;
    }

    if(count > n/2)
        return ans;
    else
        return -1;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int MJ = MJElem_MooresAlgo(arr, n);

    cout << "Majority Elem: " << MJ << endl;

    return 0;
}