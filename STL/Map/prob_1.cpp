#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int>mp;

    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        // mp[s] = mp[s] + 1
        mp[s]++;
    }

    for(auto &pr : mp){
        cout<<pr.first<<" "<<pr.second<<"\n";
    }

    return 0;
}