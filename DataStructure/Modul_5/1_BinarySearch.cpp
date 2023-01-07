#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }

    int low = 0, heigh = n - 1;

    int flag = 0;

    while (low <= heigh)
    {
        int mid = (low + heigh) / 2;

        cout<<"Low = "<<low<<" Heigh = "<<" Mid = "<<mid;

        if (arr[mid] == k)
        {
            cout << "\nYES \n"
                 << mid << "\n";
                 flag = 1;
            break;
        }
        else if (arr[mid] > k)
        {
            heigh = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

    }
     if(flag==0){
            cout<<"NO\n";
        }
}

/*
10 13
2 4 5 13 3 46 6 12 14 15
*/