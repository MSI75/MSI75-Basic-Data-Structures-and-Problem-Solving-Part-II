#include <bits/stdc++.h>
using namespace std;

vector<int> QuickSort(vector<int> &arr)
{
    if (arr.size() <= 1)
        return arr;

    int pivt = rand() % arr.size();

    vector<int> l;
    vector<int> r;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivt)
            continue;

        if (arr[i] <= arr[pivt])
            l.push_back(arr[i]);
        else
            r.push_back(arr[i]);
    }

    vector<int> sorted_l = QuickSort(l);
    vector<int> sorted_r = QuickSort(r);

    vector<int> add;

    for (int i = 0; i < sorted_l.size(); i++)
        add.push_back(sorted_l[i]);

    add.push_back(arr[pivt]);

    for (int i = 0; i < sorted_r.size(); i++)
        add.push_back(sorted_r[i]);

    return add;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = QuickSort(arr);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    cout << "\n";

    return 0;
}