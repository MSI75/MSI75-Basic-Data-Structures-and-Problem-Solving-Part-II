#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 6, 5, 5, 5, 6};
    map<int, int> freq;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        freq[arr[i]]++;

    for (auto i : freq)
        cout << i.first << " : " << i.second << "\n";

    return 0;
}