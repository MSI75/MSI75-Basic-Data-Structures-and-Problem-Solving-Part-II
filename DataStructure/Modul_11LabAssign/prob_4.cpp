// #include <bits/stdc++.h>
// using namespace std;

// bool merge(vector<int> arr1, vector<int> arr2)
// {

//     int i = 0, j = 0;

//     if (arr1.size() > arr2.size())
//     {
//         return 0;
//     }
//     sort(arr1.begin(), arr1.end());
//     sort(arr2.begin(), arr2.end());

//     while (i < arr1.size() && j < arr2.size())
//     {
//         if (arr1[i] > arr2[j])
//         {
//             j++; // 3
//         }
//         else if (arr1[i] == arr2[j])
//         {
//             i++;  // 1 , 2
//             j++;  // 1 , 2
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             return 0;
//         }
//     }
//     return (i < arr1.size()) ? false : true;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr1(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }

//     int m;
//     cin >> m;
//     vector<int> arr2(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }

//     if (merge(arr1, arr2))
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool merge(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0;

    if (arr1.size() > arr2.size())
    {
        return 0;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] > arr2[j])
            j++;
        else if (arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            return 0;
        }
    }
    return (i < arr1.size()) ? false : true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    if(merge(arr1, arr2)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}