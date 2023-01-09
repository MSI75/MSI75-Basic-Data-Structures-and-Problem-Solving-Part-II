#include <bits/stdc++.h>
using namespace std;

vector<int> two_array(vector<int> a, vector<int> b)
{
    vector<int> merge;
    int j = 0;
    int k = 0;

    int len = a.size() + b.size();

    for (int i = 0; i < len; i++)
    {
        if (j == a.size())
        {
            merge.push_back(b[k]);
            k++;
        }
        else if (k == b.size())
        {
            merge.push_back(a[j]);
            j++;
        }
        else if (a[j] > b[k])
        {
            merge.push_back(a[j]);
            j++;
        }
        else
        {
            merge.push_back(b[k]);
            k++;
        }
    }
    return merge;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> ans = two_array(a, b);

    for (int i = 0; i < n + m; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}