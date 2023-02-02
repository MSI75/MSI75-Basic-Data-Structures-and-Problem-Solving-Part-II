#include <bits/stdc++.h>
using namespace std;

int main()
{
    // auto a = 1.45;
    // cout<<a<<"\n";

    vector<int> v = {1, 2, 3, 4, 5};

    // vector<int>::iterator it = v.begin();
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << "\n";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
    // for (int &value : v)
    // {
    //     value++;
    // }

    for (auto &value : v)
    {
        value++;
    }

    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << "\n";

    vector<pair<int, int>> v_p = {{1, 4}, {5, 6}, {7, 8}, {3, 6}};
    // for (pair<int, int> &value : v_p)
    // {
    //     cout << value.first << " " << value.second << "\n";
    // }

    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << "\n";
    }
}