#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    // O(log(n))
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(7);

    // O(n)
    // printing set
    for (auto i : st)
        cout << i << " ";
    cout << "\n";

    // O(1)
    cout << "set size : " << st.size() << "\n";

    // O(n)
    // printing set
    // for (auto it = st.begin(); it != st.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << "\n";

    // O(log(n))
    // Erase
    st.erase(7);
    for (auto i : st)
        cout << i << " ";
    cout << "\n";

    // st.erase(8);
    // for (auto i : st)
    //     cout << i << " ";
    // cout << "\n";

    // O(log(n))
    if (st.find(7) != st.end())
        cout << "7 is found\n";
    else
        cout << "7 is not found\n";

    if (st.find(5) != st.end())
        cout << "5 is found\n";
    else
        cout << "5 is not found\n";
    return 0;
}