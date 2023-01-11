#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &arr)
{
    if (arr.size() <= 1)
        return arr;

    int pivot = arr.size() - 1;

    vector<int> a, b;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr[pivot])
            continue;

        if (arr[i] <= arr[pivot])
            a.push_back(arr[i]);
        else
            b.push_back(arr[i]);
    }

    vector<int>sorted_a = quick_sort(a);
    vector<int>sorted_b = quick_sort(b);

    vector<int>sorted_c;

    for(int i = 0; i<sorted_a.size(); i++)
    sorted_c.push_back(sorted_a[i]);

    sorted_c.push_back(arr[pivot]);

    for(int i = 0; i<sorted_b.size(); i++)
    sorted_c.push_back(sorted_b[i]);

    return sorted_c;
}

int main(){
    vector<int>arr={7,5,1,4,2,1,3};

    vector<int>ans = quick_sort(arr);

    for(int i = 0; i<arr.size(); i++){
        cout<<ans[i]<<" ";
    }
}