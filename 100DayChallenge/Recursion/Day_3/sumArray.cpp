#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int n)
{
    // base case
    // if (n <= 0)
    //     return 0;

    // return sumArr(arr, n - 1) + arr[n - 1];

    // base case
    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];
    
    int remainingPart = sumArr(arr + 1, n - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumArr(arr, n) << "\n";
    return 0;
}