#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    int pivot = rand() % arr.size();
    vector<int> l;
    vector<int> r;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }

        if (arr[i] >= arr[pivot])
        {
            l.push_back(arr[i]);
        }
        else
        {
            r.push_back(arr[i]);
        }
    }

    vector<int> l_sorted = quick_sort(l);
    vector<int> r_sorted = quick_sort(r);

    vector<int> sorted;

    for (int i = 0; i < l_sorted.size(); i++)
    {
        sorted.push_back(l_sorted[i]);
    }

    sorted.push_back(arr[pivot]);

    for (int i = 0; i < r_sorted.size(); i++)
    {
        sorted.push_back(r_sorted[i]);
    }

    return sorted;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = quick_sort(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}