#include <bits/stdc++.h>
using namespace std;

vector<int> previousIndex(vector<string> &str)
{
    vector<int> add;
    map<string, int> previous;

    for (int i = 0; i < str.size(); i++)
    {
        if (previous.find(str[i]) != previous.end())
            add.push_back(previous[str[i]]);
        else
            add.push_back(-1);

        previous[str[i]] = i;
    }
    return add;
}

int main(){
    int n;
    cin>>n;

    vector<string>arr(n);

    for(int i = 0; i<n;i++)
    cin>>arr[i];

    vector<int>ans = previousIndex(arr);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<"\n";
    }
}