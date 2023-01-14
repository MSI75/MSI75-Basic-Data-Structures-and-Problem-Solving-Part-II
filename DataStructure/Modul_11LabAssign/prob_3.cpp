#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<int> a, b;
    for (int i = 0; i < mid; i++)
        a.push_back(arr[i]);

    for (int i = mid; i < arr.size(); i++)
        b.push_back(arr[i]);

    vector<int> sorted_a = merge(a);
    vector<int> sorted_b = merge(b);
    vector<int> merged;
    int index1 = 0, index2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (index1 >= sorted_a.size())
        {
            merged.push_back(sorted_b[index2]);
            index2++;
        }
        else if (index2 >= sorted_b.size())
        {
            merged.push_back(sorted_a[index1]);
            index1++;
        }
        else if (sorted_a[index1] < sorted_b[index2])
        {
            merged.push_back(sorted_a[index1]);
            index1++;
        }
        else
        {
            merged.push_back(sorted_b[index2]);
            index2++;
        }
    }
    return merged;
}

int find_pair(vector<int> arr, int n)
{
    int count = 0;
    vector<int> sorted_arr = merge(arr);
    int s = 0;
    int e = sorted_arr.size() - 1;

    while (s < e)
    {
        if (sorted_arr[s] + sorted_arr[e] == n)
        {
            count++;
            s++;
            e--;
        }
        else if (sorted_arr[s] + sorted_arr[e] < n)
        {
            s++;
        }
        else
        {
            e--;
        }
    }

    return count;


    
}
void get_input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cin >> arr[i];
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    get_input(arr);
    cin >> k;

    int ans = find_pair(arr, k);

    cout << ans << "\n";

    return 0;
}