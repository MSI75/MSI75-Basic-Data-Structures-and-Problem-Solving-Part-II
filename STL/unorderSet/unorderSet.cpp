#include <bits/stdc++.h>
using namespace std;
void printVec(unordered_set<string> us)
{
    cout << "size : " << us.size() << "\n";
    for (auto value : us)
    {
        cout << value << "\n";
    }
    cout << "\n";
}

int main()
{
    unordered_set<string> us;
    us.insert("ABCD"); // O(1)
    us.insert("DEFG");
    us.insert("ZESF");
    us.insert("ABCFG");

    auto it = us.find("ABCD"); // O(1)
    if (it != us.end())
        // cout << *it << "\n";
        us.erase(it);
    printVec(us);
}