#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pvt = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pvt)
            cnt++;
    }

    int pvtIndex = s + cnt;
    swap(arr[pvtIndex], arr[s]);

    int l = s, r = e;

    if (l < pvtIndex && pvtIndex < r)
    {
        while (l < pvtIndex)
            l++;
        while (r > pvtIndex)
            r--;
        if (l < pvtIndex && pvtIndex < r)
            swap(arr[l++], arr[r--]);
    }
    return pvtIndex;
}

void QuickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int pivote = partition(arr, s, e);

    QuickSort(arr, s, pivote - 1);
    QuickSort(arr, pivote + 1, e);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    QuickSort(arr, 0, n);

    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}