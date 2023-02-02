#include <bits/stdc++.h>
using namespace std;

void print(list<int> &l)
{
    auto it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << "\n";
}

int getValue(list<int> &l, int index)
{
    if (index >= l.size())
        return -1;

    auto it = l.begin();
    advance(it, index);
    return *it;
}

bool search(list<int> &l, int value)
{

    return find(l.begin(), l.end(), value) != l.end();
}

void deleteZero(list<int> &l)
{
    l.erase(remove(l.begin(), l.end(), 0), l.end());
}
int main()
{
    list<int> l = {3, 0, 2, 0, 6, 0, 4, 0, 5};
    print(l);

    cout << getValue(l, 3) << "\n";

    if (search(l, 5))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    deleteZero(l);
    print(l);
}