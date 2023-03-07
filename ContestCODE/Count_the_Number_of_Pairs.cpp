#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mmp, temp;

        for (int i = 0; i < n; i++)
        {
            if ('a' <= s[i])
                mmp[s[i]]++;

            else
                temp[s[i] + 32]++;
        }
        int cnt = 0;
        for (char i = 'a'; i < 'z'; i++)
        {
            cnt += min(mmp[i], temp[i]);
            int diff = abs(mmp[i] - temp[i]);
            cnt += min(diff / 2, k);
            k -= min(k, diff / 2);
        }
        cout << cnt << "\n";
    }
}