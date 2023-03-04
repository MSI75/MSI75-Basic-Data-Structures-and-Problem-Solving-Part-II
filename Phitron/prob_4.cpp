#include <bits/stdc++.h>
using namespace std;

int LIFO(string s)
{
    stack<int> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            st.push(ch);
            count++;
        }
        else
        {
            if (st.empty())
                return false;
            else if (st.top() == '{' && ch == '}')
            {
                count++;
                st.pop();
            }
            else
                return 0;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    stack<int> st;

    cout<<LIFO(s);
    return 0;
}