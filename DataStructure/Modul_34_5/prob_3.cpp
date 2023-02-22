#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>>arr(n);

    for (int i = 0; i < n; i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(),arr.end());

    
    

    for (int i = 0; i < n; i++)
    {
       
        cout << "Value : "<< arr[i].first << ", Previous Index : " <<arr[i].second << "\n";
    }
}