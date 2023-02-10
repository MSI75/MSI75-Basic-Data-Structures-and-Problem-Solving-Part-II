#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    deque<char> dq;
    for (auto it : s)
    {
        dq.push_back(it);
    }

    for(auto it : s)
    {
        if (dq.front() != dq.back())
            return false;

        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
