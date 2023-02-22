#include <bits/stdc++.h>
using namespace std;

// using recursion
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

// using for loop
// int fib(int n)
// {
//     if (n == 1 || n == 2)
//         return n - 1;
//     int a = 0, b = 1;
//     int ans;
//     for (int i = 3; i <= n; i++)
//     {
//         ans = a + b;
//         a = b;
//         b = ans;
//     }
//     return ans;
// }

int main()
{
    int n;
    cin >> n;
    // cout<<fib(n)<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}