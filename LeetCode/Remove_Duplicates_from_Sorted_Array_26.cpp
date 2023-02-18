#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &nums)
{
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[count - 1])
            nums[count++] = nums[i];
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto i : v)
    {
        cin >> v[i];
    }

    cout << removeDuplicate(v) << "\n";
}