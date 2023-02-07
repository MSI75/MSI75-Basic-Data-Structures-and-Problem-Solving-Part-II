#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &s)
    {
        if (s.size() == 0)
            return "";
        sort(s.begin(), s.end());
        string ans = "";
        string a = s[0];
        string b = s[s.size() - 1];

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                ans += a[i];
            else
                break;
        }
        return ans;
    }
};

int main()
{
    Solution S;
    // vector<string>s = {"flower","flow","flight"};
    // vector<string> s = {"dog", "racecar", "car"};
    vector<string> s = {""};

    cout << S.longestCommonPrefix(s) << "\n";
    return 0;
}