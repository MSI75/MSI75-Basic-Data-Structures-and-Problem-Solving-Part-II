#include <bits/stdc++.h>
using namespace std;

// sort -> quick sort, insertion sort, heap sort
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    vector<int>arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort(arr, arr + n); 
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}