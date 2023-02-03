#include <bits/stdc++.h>
using namespace std;
// --------------- semilerly map -----------------
void printVec(set<string> s)
{
    cout << "size : " << s.size() << "\n";

    for (string st : s)
    {
        cout << st << "\n";
    }
    cout << "\n";
}

int main()
{
    set<string> s;
    s.insert("ABC");  // log(n)
    s.insert("SDFKlj");
    s.insert("ZSLKDFJ");
    s.insert("ABCDE");

    // auto it = s.find("ABCDE"); // log(n)
    // if (it != s.end())
    //     // cout << *it << "\n";
    //     s.erase(it);
    s.erase("ABCDE");
    printVec(s);
}