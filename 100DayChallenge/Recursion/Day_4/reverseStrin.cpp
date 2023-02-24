#include <bits/stdc++.h>
using namespace std;

string revers(string &str, int i, int j)
{
    if (i > j)
        return str;

    swap(str[i], str[j]);

    string ans = revers(str, i + 1, j - 1);
    // cout << str << " ";
    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout<<revers(s, 0, s.size() - 1)<<"\n";
    return 0;
}