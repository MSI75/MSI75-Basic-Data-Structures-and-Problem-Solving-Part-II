#include <bits/stdc++.h>
using namespace std;
// ------------ Duplicate value allow ---------------

void printVec(multiset<string> ml)
{
    cout << "size : " << ml.size() << "\n";
    for (auto value : ml)
    {
        cout << value << "\n";
    }
    cout << "\n";
}

int main()
{
    multiset<string> ml;
    ml.insert("abcd"); // O(long(n))
    ml.insert("zeaf");
    ml.insert("lmad");
    ml.insert("yead");
    ml.insert("abcd");

    auto it = ml.find("abcd");
    if (it != ml.end())
        // cout << *it << "\n";
        // ml.erase(it); // only specific value delete
    ml.erase("abcd");
    printVec(ml);
}