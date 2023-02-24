#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    int binaryNum[100];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

// bool checkPalindrome(long long N)
// {
//     decimalToBinary(N);

//     if (N == 0)
//         // return;
// }

bool isPlalindrome(string s, int i, int j)
{
    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;
    else
        return isPlalindrome(s, i + 1, j - 1);
}

int main()
{
    // int n;
    // cin >> n;

    // decimalToBinary(n);
    // cout << "\n";

    string s;
    cin >> s;

    if (isPlalindrome(s, 0, s.size() - 1))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}