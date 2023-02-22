#include <bits/stdc++.h>
using namespace std;

void String(string &s, int i)
{
    int n = s.size();
    if (i == n)
        return;

    char temp = s[i];
    String(s, i + 1);

    cout << temp << " ";
}

int main()
{
    string s;
    cin >> s;

    String(s, 0);
    cout << "\n";

    return 0;
}