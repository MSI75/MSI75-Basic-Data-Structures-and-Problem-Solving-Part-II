#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // int arr[5] = {1, 2, 3, 4, 5};
    // int n = 5;

    bool ans = isSorted(arr, n);

    if (ans)
        cout << "Sortede\n";
    else
        cout << "Not Sorted\n";

    return 0;
}