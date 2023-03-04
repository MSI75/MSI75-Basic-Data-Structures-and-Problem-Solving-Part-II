#include <bits/stdc++.h>
using namespace std;

bool isDivisible(long long int n)
{
    int even = 0, odd = 0, idx = 1;

    while (n > 0)
    {
        if (idx % 2 != 0)
            odd += n % 10;
        else
            even += n % 10;

        n /= 10;
        idx++;
    }

    int diff = abs(odd - even);

    return diff % 11 == 0;
}

int main()
{
    long long int n;
    cin >> n;

    if (isDivisible(n))
        cout << "YES\n";
    else
        cout << "YES\n";

    return 0;
}