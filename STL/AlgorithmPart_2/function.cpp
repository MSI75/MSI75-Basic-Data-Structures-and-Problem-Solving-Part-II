#include <bits/stdc++.h>
using namespace std;

bool isPositive(int x)
{
    return x > 0;
}

int main()
{
    // Lamda Function
    // cout<<[](int x, int y){return x + y;}(7,3)<<"\n";
    // auto sum = [](int x, int y)
    // { return x + y; };
    // cout << sum(7, 3) << "\n";

    // All_of function
    // vector<int> v = {7, 2, 5};
    // cout << all_of(v.begin(), v.end(), [](int x)
    //                { return x > 0; })
    //      << "\n";

    // cout << all_of(v.begin(), v.end(), isPositive)
    //      << "\n";

    // // any_of function
    // vector<int> v = {7, -2, -5};
    // cout << any_of(v.begin(), v.end(), [](int x)
    //                { return x > 0; })
    //      << "\n";

    // cout << any_of(v.begin(), v.end(), isPositive)
    //      << "\n";

    // none_of function
    vector<int> v = {7, 2, 5};
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << "\n";

    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << "\n";

    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << "\n";
}