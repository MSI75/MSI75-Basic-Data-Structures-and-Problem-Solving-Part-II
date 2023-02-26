#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int *arrL = new int[n1];
    int *arrR = new int[n2];

    int mainArrayIndex = s;
    for (int i = 0; i < n1; i++)
        arrL[i] = arr[mainArrayIndex++];

    mainArrayIndex = mid + 1;
    for (int i = 0; i < n2; i++)
        arrR[i] = arr[mainArrayIndex++];

    int l = 0;
    int r = 0;
    mainArrayIndex = s;

    while (l < n1 && r < n2)
    {
        if (arrL[l] < arrR[r])
            arr[mainArrayIndex++] = arrL[l++];
        else
            arr[mainArrayIndex++] = arrR[r++];
    }

    while (l < n1)
        arr[mainArrayIndex++] = arrL[l++];

    while (r < n2)
        arr[mainArrayIndex++] = arrR[r++];

    delete[] arrL;
    delete[] arrR;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, mid, e);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    int arr[] = {7, 4, 5, 1, 3, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n);

    print(arr, n);

    return 0;
}