#include <bits/stdc++.h>
using namespace std;
bool isBracketSequence(stack<int>st, string s){

    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (now == '(' || now == '{' || now == '[')
        {
            st.push(now);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }

            if (st.top() == '(' && now == ')')
                st.pop();
            else if (st.top() == '{' && now == '}')
                st.pop();
            else if (st.top() == '[' && now == ']')
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

    if (isBracketSequence(st,s))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}