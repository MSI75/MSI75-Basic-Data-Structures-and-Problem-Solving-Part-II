#include <bits/stdc++.h>
using namespace std;

void reachHome(int scr, int dest)
{
    cout << "source " << scr << " destination " << dest << "\n";
    // base case
    if (scr == dest)
    {
        cout << "Reach home\n";
        return;
    }
    // prcessing -> 1 step increase
    scr++;
    // recursive call
    reachHome(scr, dest);
}

int main()
{
    int scr, dest;
    cin >> scr >> dest;

    reachHome(scr, dest);
    return 0;
}