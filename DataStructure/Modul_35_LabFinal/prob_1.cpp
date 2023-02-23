#include <bits/stdc++.h>
using namespace std;

vector<string> marg_sort(vector<string> str)
{
    if (str.size() <= 1)
        return str;

    int mid = str.size() / 2;

    vector<string> l;
    vector<string> r;

    for (int i = 0; i < mid; i++)
        l.push_back(str[i]);

    for (int i = mid; i < str.size(); i++)
        r.push_back(str[i]);

    vector<string> sorted_left = marg_sort(l);
    vector<string> sorted_right = marg_sort(r);

    vector<string> sorted_add;

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (idx1 == sorted_left.size())
        {
            sorted_add.push_back(sorted_right[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_right.size())
        {
            sorted_add.push_back(sorted_left[idx1]);
            idx1++;
        }
        else if (sorted_left[idx1] < sorted_right[idx2])
        {
            sorted_add.push_back(sorted_left[idx1]);
            idx1++;
        }
        else
        {
            sorted_add.push_back(sorted_right[idx2]);
            idx2++;
        }
    }
    return sorted_add;
}

int main()
{
    int n;
    cin >> n;
    vector<string> str(n);

    for (int i = 0; i < n; i++)
        cin >> str[i];

    vector<string> ans = marg_sort(str);

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    cout << "\n";
}