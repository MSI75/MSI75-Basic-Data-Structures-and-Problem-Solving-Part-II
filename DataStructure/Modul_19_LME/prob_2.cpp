#include <bits/stdc++.h>
using namespace std;

vector<int> sorted_arr(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    int mid = arr.size() / 2;

    vector<int> le_arr;
    vector<int> ri_arr;

    for (int i = 0; i < mid; i++)
        le_arr.push_back(arr[i]);

    for (int i = mid; i < arr.size(); i++)
        ri_arr.push_back(arr[i]);

    vector<int> l_arr = sorted_arr(le_arr);
    vector<int> r_arr = sorted_arr(ri_arr);

    int index1 = 0;
    int index2 = 0;
    vector<int> merge_arr;

    for (int i = 0; i < arr.size(); i++)
    {
        if (index1 == l_arr.size())
        {
            merge_arr.push_back(r_arr[index2]);
            index2++;
        }
        else if (index2 == r_arr.size())
        {
            merge_arr.push_back(l_arr[index1]);
            index1++;
        }
        else if (l_arr[index1] < r_arr[index2])
        {
            merge_arr.push_back(l_arr[index1]);
            index1++;
        }
        else
        {
            merge_arr.push_back(r_arr[index2]);
            index2++;
        }
       
    }
    return merge_arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = sorted_arr(arr);
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != ans[i + 1])
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}