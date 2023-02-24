#include <bits/stdc++.h>
using namespace std;

vector<int> unionTwoSet(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;

    for (int i = 0; i < arr1.size(); i++)
        st.insert(arr1[i]);

    for (int i = 0; i < arr2.size(); i++)
        st.insert(arr2[i]);

    vector<int> v(st.begin(), st.end());
    return v;
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

    vector<int> ans = unionTwoSet(a, b);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    cout << "\n";

    return 0;
}
