#include <bits/stdc++.h>
using namespace std;

/*
    time complexity -> O(1)
    space / memory complexity -> O(1)
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a + b + c;
    int mult = a * b * c;

    cout << maxi << "\n";
    cout << mini << "\n";
    cout << sum << "\n";
    cout << mult << "\n";

    return 0;
}