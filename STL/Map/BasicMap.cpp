#include<bits/stdc++.h>
using namespace std;

void printVec(map<int, string>&mp){
    cout<<"Size : "<<mp.size()<<"\n";

// O(nlog(n))
    for(auto &pr : mp){
        cout<<pr.first<<" "<<pr.second<<"\n";
    }
    cout<<"\n";
}

int main(){
    map<int,string>mp;
    mp[1] = "abc"; // O(log(n))
    mp[5] = "ebfl";
    mp[2] = "ladd";
    mp.insert({3, "banf"});

    // mp.erase(5);
    auto it = mp.find(2);
    if(it!=mp.end())
        mp.erase(it);

    // mp.clear();
    
    // auto it = mp.find(5); // O(log(n))
    // if(it==mp.end()){
    //     cout<<"Not value\n"; 
    // }else{
    //     cout<<it->first<<" "<<it->second<<"\n";
    // }

    printVec(mp);
}

// 01. sequence 
// 02. unique
// 03. sorted