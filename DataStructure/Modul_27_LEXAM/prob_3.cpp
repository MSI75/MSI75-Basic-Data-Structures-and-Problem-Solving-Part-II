#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*')
        return 2;
    else
        return -1;
}

void infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            ans += ch;

        else if (ch == '(')
            st.push(ch);

        else if (ch == ')') 
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top())) 
            {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << "\n";
}

int main()
{
    string s;
    cin >> s;
    infixToPostfix(s);
    return 0;
}