
#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &arr)
{

    if (arr.size() <= 1)
        return arr;
    int pivot = rand() % arr.size();

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < arr.size(); i++)
    {
        if(i==pivot){
            continue;
        }
        if (arr[i] > arr[pivot])
        {
            a.push_back(arr[i]);
        }
        else
        {
            b.push_back(arr[i]);
        }
    }

    vector<int> sorted_a = quick_sort(a);
    vector<int> sorted_b = quick_sort(b);

    vector<int> sorted_c;

    for (int i = 0; i < sorted_a.size(); i++)
    {
        sorted_c.push_back(sorted_a[i]);
    }

    sorted_c.push_back(arr[pivot]);

    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_c.push_back(sorted_b[i]);
    }

    return sorted_c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<int> ans = quick_sort(a);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
