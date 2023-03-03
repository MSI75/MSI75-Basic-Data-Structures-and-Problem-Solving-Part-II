#include <bits/stdc++.h>
using namespace std;

bool IsItACat(char str[], int n)
{
    if (n < 0)
        return false;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'm' || str[i] == 'M' && str[i] == 'e' || str[i] == 'E' && str[i] == 'o' || str[i] == 'O' && str[i] == 'w' || str[i] == 'W')
            return true;
        else
            return false;
    }
    return false;
}

void input(char str[], int n){
    
}

int main()
{
    int n;
    cin >> n;

    char str[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> str[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (IsItACat(str, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}