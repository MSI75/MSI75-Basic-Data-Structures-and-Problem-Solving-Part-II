#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p, p1;
    p = make_pair(1, "MSI");
    // p = {1, "MSI"};
    p1 = {4, "Banda"};

    cout << p.first << " " << p.second << "\n";
    cout << p1.first << " " << p1.second << "\n";

    pair<int, string> &p2 = p;
    p2.first = 5;
    cout << p.first << " " << p.second << "\n";

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << "\n";
    }

    // swap
    swap(p_array[0], p_array[2]);
    cout << "After swap :\n";
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << "\n";
    }

    pair<int, int>p4;
    cin>>p4.first;
    cout<<p4.first<<"\n";
}