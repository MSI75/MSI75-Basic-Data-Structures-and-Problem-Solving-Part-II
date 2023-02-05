#include <bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a, int b)
// {
//     if (a < b)
//         return true;
//     return false;
// }

// bool should_i_swap(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first != b.first)
//     {
//         if (a.first > b.first)
//             return true;
//         return false;
//     }
//     else
//     {
//         if (a.second < b.second)
//             return true;
//         return false;
//     }
// }

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        // if (a.first > b.first)
        //     return false;
        // return true;

        // return a.first>b.first;
        return a.first<b.first;
    }
    else
    {
        // if (a.second < b.second)
        //     return false;
        // return true;
        // return a.second<b.second;
        return a.second>b.second;
    }
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    // vector<int>arr(n);
    vector<pair<int, int>> arr(5);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (should_i_swap(arr[i], arr[j]))
    //             swap(arr[i], arr[j]);
    //     }
    // }
    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << arr[i].first << " " << arr[i].second << "\n";
}