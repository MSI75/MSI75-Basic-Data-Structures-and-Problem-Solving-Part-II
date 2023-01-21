#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Time Complexity O(n*log(n))
    int n;
    cin >> n;
    // cven loop
    for (int i = 1; i <= n; i++) // n * n long n
    {
        for (int j = 1; j <= n; j = j + i) // nlong n
        {
            cout << i << " " << j << "\n";
        }
    }
}