#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else
            {
                if (st.empty())
                    return false;

                if (st.top() == '(' && ch == ')')
                    st.pop();
                else if (st.top() == '{' && ch == '}')
                    st.pop();
                else if (st.top() == '[' && ch == ']')
                    st.pop();
                else
                    return false;
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    Solution S;
    string s;
    cin >> s;

    if (S.isValid(s))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}