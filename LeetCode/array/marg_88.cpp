#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // vector<int> mrg;

    // for (int i = 0; i < n; i++)
    //     mrg.push_back(nums1[i]);

    // for (int i = 0; i < m; i++)
    //     mrg.push_back(nums2[i]);

    // sort(mrg.begin(), mrg.end());

    // for (int i = 0; i < n + m; i++)
    // {
    //     if (mrg[i] != 0)
    //         cout << mrg[i] << " ";
    // }

    while (nums1.size() > m)
        nums1.pop_back();

    for (int i = 0; i < n; i++)
    {
        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < n + m; i++)
    {
        cout << nums1[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    merge(arr1, n, arr2, m);
    return 0;
}