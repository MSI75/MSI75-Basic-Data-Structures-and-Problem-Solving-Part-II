#include <bits/stdc++.h>
using namespace std;

vector<int> marge_sort(vector<int> a)
{
    // base case
    if (a.size() <= 1)
        return a;

    int mid = a.size() / 2;

    vector<int> b;
    vector<int> c;

    for (int i = 0; i < mid; i++)
        b.push_back(a[i]);

    for (int i = mid; i < a.size(); i++)
        c.push_back(a[i]);

    vector<int> sorted_b = marge_sort(b);
    vector<int> sorted_c = marge_sort(c);

    vector<int> sorted_a;
    int indx1 = 0;
    int indx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (indx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }

        else if (indx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }

        else if (sorted_b[indx1] < sorted_c[indx2])
        {
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }
        
        else
        {
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
    }
    return sorted_a;
}

int main()
{
    vector<int> arr = {4, 5, 6, 1, 2, 7, 8, 3, 9};

    vector<int> ans = marge_sort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << " ";
    }
}