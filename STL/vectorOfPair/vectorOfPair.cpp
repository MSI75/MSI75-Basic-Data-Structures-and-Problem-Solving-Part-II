#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>v){
    cout<<"Size : "<<v.size()<<"\n";

    for(int i = 0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    cout<<"\n";
}

int main(){
    // vector of pair 
    // vector<pair<int,int>>v = {{1,2},{4,5},{7,8},{3,6},{6,9}};
    // printVec(v);

    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x, y;
        cin>>x>>y;
        // v.push_back(make_pair(x,y));
        v.push_back({x,y});
    }

    printVec(v);
}