#include <bits/stdc++.h>
using namespace std;
class Evaluation
{

    stack<int> st;
    stack<char> op;
    int precedence(char ch)
    {
        if (ch == '+' || ch == '-')
            return 1;
        else if (ch == '*' || ch == '/')
            return 2;
        else
            return 0;
    }

    int calculate(int a, int b, char ch)
    {
        switch (ch)
        {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        }
        return -1;
    }

public:
    int evaluate(string exp)
    {

        for (int i = 0; i < exp.size(); i++)
        {

            if (exp[i] == ' ')
                continue;

            else if (exp[i] == '(')
                op.push(exp[i]);

            else if (isdigit(exp[i]))
            {
                int v = 0;
                while (i < exp.size() &&
                       isdigit(exp[i]))
                {
                    v = (v * 10) + (exp[i] - '0');
                    i++;
                }
                st.push(v);
                i--;
            }

            else if (exp[i] == ')')
            {
                while (!op.empty() && op.top() != '(')
                {
                    int v2 = st.top();
                    st.pop();

                    int v1 = st.top();
                    st.pop();

                    char opr = op.top();
                    op.pop();

                    st.push(calculate(v1, v2, opr));
                }

                if (!op.empty())
                    op.pop();
            }

            else
            {

                while (!op.empty() && precedence(op.top()) >= precedence(exp[i]))
                {
                    int v2 = st.top();
                    st.pop();

                    int v1 = st.top();
                    st.pop();

                    char opr = op.top();
                    op.pop();

                    st.push(calculate(v1, v2, opr));
                }

                op.push(exp[i]);
            }
        }

        while (!op.empty())
        {
            int v2 = st.top();
            st.pop();

            int v1 = st.top();
            st.pop();

            char opr = op.top();
            op.pop();

            st.push(calculate(v1, v2, opr));
        }

        return st.top();
    }
};

int main()
{
    Evaluation e;
    string s;
    cin >> s;
    cout << e.evaluate(s) << "\n";
    return 0;
}
