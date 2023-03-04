#include <bits/stdc++.h>
using namespace std;

void magicColors(char cl[], int n)
{
   
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        char cl[m];
        for (int i = 0; i < m; i++)
        {
            cin >> cl[i];
        }
        magicColors(cl, m);
    }
}
