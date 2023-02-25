#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> &arr)
{
    if (arr.size() <= 1)
        return arr;

    int divide = arr.size() / 2;

    vector<int> l;
    vector<int> r;

    for (int i = 0; i < divide; i++)
        l.push_back(arr[i]);
    for (int i = divide; i < arr.size(); i++)
        r.push_back(arr[i]);

    vector<int> sorted_l = merge_sort(l);
    vector<int> sorted_r = merge_sort(r);

    vector<int> add;
    int l1 = 0, r1 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (l1 == sorted_l.size())
        {
            add.push_back(sorted_r[r1]);
            r1++;
        }
        else if (r1 == sorted_r.size())
        {
            add.push_back(sorted_l[l1]);
            l1++;
        }
        else if (sorted_l[l1] < sorted_r[r1])
        {
            add.push_back(sorted_l[l1]);
            l1++;
        }
        else if (sorted_r[r1] < sorted_l[l1])
        {
            add.push_back(sorted_r[r1]);
            r1++;
        }
    }
    return add;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = merge_sort(arr);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
    return 0;
}