#include <bits/stdc++.h>
using namespace std;

vector<int> ladder_array_sorted(vector<int> &ladder_array)
{
    deque<int> dq;
    vector<int> add;
    for (int i = 0; i < ladder_array.size(); i++)
        dq.push_back(ladder_array[i]);

    while (!dq.empty())
    {
        if (dq.front() > dq.back())
        {
            add.push_back(dq.back());
            dq.pop_back();
        }
        else
        {
            add.push_back(dq.front());
            dq.pop_front();
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

    vector<int> ans = ladder_array_sorted(arr);

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
