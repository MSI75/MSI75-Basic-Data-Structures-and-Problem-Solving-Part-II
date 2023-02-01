#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(7);
    st.push(5);
    st.push(3);
    cout << "Stack size : " << st.size() << "\n";
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << "Stack size : " << st.size() << "\n";
}