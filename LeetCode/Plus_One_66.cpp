#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size() - 1;

    for (int i = n; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            break;
        }
        else
            digits[i] = 0;
    }
    if (digits[0] == 0)
        digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans = plusOne(v);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}