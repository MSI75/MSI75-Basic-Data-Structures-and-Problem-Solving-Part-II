#include <bits/stdc++.h>
using namespace std;

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

    // int *ptr = upper_bound(arr, arr + n, 3);
    auto it = upper_bound(arr.begin(), arr.end(), 3);

    // if (ptr == (arr + n))
    if(it==arr.end())
    {
        cout << "Not Found\n";
        return 0;
    }
    else
        // cout << *ptr << "\n";
        cout<<*it<<"\n";
}