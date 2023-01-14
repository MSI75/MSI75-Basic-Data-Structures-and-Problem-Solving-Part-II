#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int sumN = (n * (n + 1)) / 2;  
    int inputSum = 0;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        inputSum += x;
    }
    cout << sumN - inputSum << "\n";
    return 0;
}