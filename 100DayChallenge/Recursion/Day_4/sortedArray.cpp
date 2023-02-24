#include <bits/stdc++.h>
using namespace std;

void sortedArr(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortedArr(arr, n - 1);
}

int main()
{
    int arr[5] = {7, 2, 3, 4, 1};

    sortedArr(arr, 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}