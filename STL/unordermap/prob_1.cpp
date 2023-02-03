#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << "\n";
    }

    multimap<int,vector<int>>m;
    
}