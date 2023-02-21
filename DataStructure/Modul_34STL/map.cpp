#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // insert O(log(n))
    mp["Goru"] = 1;
    mp["Chagol"] = 2;
    mp["vera"] = 3;

    cout << mp["Goru"] << "\n";
    cout << mp["Chagol"] << "\n";

    cout << mp["vera"] << "\n";

    mp["cat"] = 5;
    cout << mp["cat"] << "\n";

    mp["cat"] = 10;
    cout << mp["cat"] << "\n";

    // O(n)
    for (auto it : mp)
        cout << "Key : " << it.first << ", value : " << it.second << "\n";
    // O(1)
    cout << mp.size() << "\n";

    map<int, int> mp1;
    mp1[69] = 1;
    mp1[56] = 2;
    mp1[87] = 3;

    mp1[100000000] = 10;
    for (auto it : mp1)
        cout << "Key : " << it.first << ", value : " << it.second << "\n";
}