#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Time O(sqrt(n))
    // space O(1)
    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i * i < n; i++) // i^2<n = i < sqrt(n) = O(sqrt(n))
    { 
        if (n % i == 0)
        {                          // O(1)
            cout << i << "\n";     // O(1)
            cout << n / i << "\n"; // O(1)
        }
    }

    return 0;
}