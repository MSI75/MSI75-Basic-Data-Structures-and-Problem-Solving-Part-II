#include <bits/stdc++.h>
using namespace std;

// Tail Recursive
void print(int n)
{
    if (n == 0)
        return;
    // Tail Recursive
    // cout << n << " ";
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
    cout << "\n";
    return 0;
}