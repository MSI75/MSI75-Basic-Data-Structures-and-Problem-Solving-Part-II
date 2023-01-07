#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int n;
    cin>>n;
    int arr1[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    int arr2[m];
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }
}