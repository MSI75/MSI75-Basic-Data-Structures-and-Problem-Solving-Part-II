#include <bits/stdc++.h>
using namespace std;

bool isBracketSequence(stack<int> st, string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
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

    return true;
}

int main()
{
    string s;
    cin >> s;

    stack<int> st;

    if (isBracketSequence(st, s))
        cout << "Yes\n";
    else
        cout << "No\n";
}

