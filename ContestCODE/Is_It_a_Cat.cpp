#include <bits/stdc++.h>
using namespace std;

string ReplaceComp(string s, int n)
{
    string compress = "";

    char ch = '#';

    for (int i = 0; i < n; i++)
    {
        int val = abs(s[i] - ch);

        if (ch == s[i] || val == 0 || val == 32)
            continue;
        else
        {
            compress += s[i];
            ch = s[i];
        }
    }
    return compress;
}

bool isItACat(string s, int n)
{
    string valid = "meow";
    string temp = ReplaceComp(s, n);

    if (valid.size() != temp.size())
        return false;

    for (int i = 0; i < valid.size(); i++)
    {
        int val = abs(temp[i] - valid[i]);

        if (val != 32 && val != 0)
            return false;
        }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isItACat(s, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}