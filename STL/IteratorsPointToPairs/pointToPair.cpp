#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 4}, {7, 8}, {9, 8}, {6, 5}};

    vector<pair<int, int>>::iterator it = v.begin();

    for (it = v.begin(); it != v.end(); ++it)
    {
        // cout<<(*it).first<<" "<<(*it).second<<"\n";
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n";
}