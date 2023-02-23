#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    cout << "size of array : " << n << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
bool linearSearch(int arr[], int n, int k)
{
    print(arr, n);
    if (n <= 0)
        return false;

    if (arr[0] == k)
        return true;
    else
    {
        int remainingPart = linearSearch(arr + 1, n - 1, k);
        return remainingPart;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    bool ans = linearSearch(arr, n, k);
    if (ans)
        cout << "Paresent\n";
    else
        cout << "Absent\n";
    return 0;
}