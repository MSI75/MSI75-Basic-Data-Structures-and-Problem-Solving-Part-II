#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // vector declaretion 
    vector<int>v;

    // vector data store use push_back function
    v.push_back(25); // index = 0 = v[0]
    v.push_back(15); // index = 1 = v[1]
    v.push_back(35); // index = 2 = v[2]
    v.push_back(45); // index = 3 = v[3]
    v.push_back(75); // index = 4 = v[4]

    // vector print 
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<"\n";

    // or vector print 
    // cout<<v.at(0)<<" ";
    // cout<<v.at(1)<<" ";
    // cout<<v.at(2)<<" ";
    // cout<<v.at(3)<<" ";
    // cout<<v.at(4)<<"\n";

    // vector size 
    // cout<<v.size()<<"\n";

    // vector print using loop
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    // cout<<v.front()<<"\n"; // vector first value print
    // cout<<v.back()<<"\n"; // vector last value print

    // a vector clear 
    // v.clear();
    // cout<<v.size()<<"\n";

    // vector empty or not 
    // v.clear();
    // if(v.empty()) cout<<"YES\n";
    // else cout<<"NOT\n";


    // vector last value delete using pop_back()
    // v.pop_back();
    // for(int i = 0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";

    // vector any a value delete or a to b value delete

    // v.erase(v.begin()+1, v.end()-1);
    v.erase(v.begin()+2);
     for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}