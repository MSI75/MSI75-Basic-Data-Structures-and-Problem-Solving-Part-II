#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
    if (s>=e)
        return true;
    if (str[s] != str[e])
        return false;

    return isPalindrome(str, s + 1, e - 1);
}

int main()
{
    string str;
    cin >> str;
      if (isPalindrome(str, 0, str.length()-1))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}