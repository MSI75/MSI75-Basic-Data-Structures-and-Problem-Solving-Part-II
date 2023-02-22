#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> mp;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(arr[i]) > 0)
        {
            index = mp[arr[i]];
            break;
        }
        mp[arr[i]] = i;
    }

    if (index != -1)
        cout << "First duplicate element is " << arr[index] << ", first occurring at index " << index << "\n";
    else
        cout << "There is no duplicate element in array "
             << "\n";
}