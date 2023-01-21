#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Time O(n^2)
    // space O(n^2)

    int n;    // O(1)
    cin >> n; // O(1)

    vector<int> v(n * n); // O(n*n)

    for (int i = 0; i < n * n; i++) // O(n*n)
        cin >> v[i]; // O(1)

    int sum = 0; // O(1)
    for (int i = 0; i < n * n; i++) // O(n*n)
        sum += v[i]; // O(1)

    cout << sum << "\n"; // O(1)

    return 0;
}