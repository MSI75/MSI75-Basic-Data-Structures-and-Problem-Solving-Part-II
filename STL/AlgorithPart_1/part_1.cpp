#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    //     cin >> v[i];

    // int min = *min_element(v.begin(), v.end());
    // cout << min << "\n";

    // int max = *max_element(v.begin(), v.end());
    // cout << max << "\n";

    // int sum = accumulate(v.begin(), v.end(), 0);
    // cout << sum << "\n";

    // int ct = count(v.begin(), v.end(), 6);
    // cout << ct << "\n";

    // // int fnd = *find(v.begin(), v.end(), 4);
    // // cout<<fnd<<"\n";

    // auto it = find(v.begin(), v.end(), 16);
    // if (it != v.end())
    //     cout << *it << "\n";
    // else
    //     cout << "Not Found\n";

    // reverse(v.begin(), v.end());
    // for(auto vr : v){
    //     cout<<vr<<" ";
    // }
    // cout<<"\n";

    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int min = *min_element(v, v+n);
    cout << min << "\n";

    int max = *max_element(v, v+n);
    cout << max << "\n";

    int sum = accumulate(v, v+n, 0);
    cout << sum << "\n";

    int ct = count(v, v+n, 6);
    cout << ct << "\n";

    // int fnd = *find(v.begin(), v.end(), 4);
    // cout<<fnd<<"\n";

    auto it = find(v, v+n, 16);
    if (it != v+n)
        cout << *it << "\n";
    else
        cout << "Not Found\n";

    reverse(v, v+n);
    for(auto vr : v){
        cout<<vr<<" ";
    }
    cout<<"\n";

    string str = "ABCDEFGHIG";
    reverse(str.begin(), str.end());

    for(auto st : str){
        cout<<st<<" ";
    }
    cout<<"\n";
}

// 5
// 7 6 4 9 6