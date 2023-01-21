#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Time O(n) 
    // space O(n) 

    int n;    // O(1)
    cin >> n; // O(1)

    vector<int> v(n); // O(n)

    for (int i = 0; i < n; i++) // O(n)
        cin >> v[i]; // O(1)

    int sum = 0; // O(1)
    for (int i = 0; i < n; i++) // O(n)
        sum += v[i]; // O(1)

    cout << sum << "\n"; // O(1)


    return 0;
}