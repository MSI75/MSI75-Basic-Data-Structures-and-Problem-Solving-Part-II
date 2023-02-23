#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

bool BinarySearch(int arr[], int s, int e, int k)
{
    print(arr, s, e);
    // base case
    // element not found
    if (s > e)
        return false;

    // element found
    int mid = s + (e - s) / 2;
    cout<<"value of arr mid is : "<<mid<<"\n";
    if (arr[mid] == k)
        return true;
    if (k > arr[mid])
        return BinarySearch(arr, mid + 1, e, k);
    else
        return BinarySearch(arr, s, mid - 1, k);

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    int ans = BinarySearch(arr, 0, n, k);
    // cout << ans << "\n";
    if (ans)
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}