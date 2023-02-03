#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> um)
{
    cout << "size : " << um.size() << "\n";

    for (auto u : um)
    {
        cout << u.first << " " << u.second << "\n";
    }
    cout << "\n";
}

int main()
{
    // inbult implementation
    // time Complexity
    // valid keys data-type

    unordered_map<int, string> um;

    um[1] = "MSI"; // O(1)
    um[4] = "SI";
    um[5] = "MS";
    um[7] = "MI";
    um[2] = "M";

    auto it = um.find(2); // O(1)
    if (it != um.end())
        um.erase(it);
    
    // um.clear();
    // if(it==um.end()){
    //     cout<<"invalid\n";
    // }else{
    //     cout<<it->first<<" "<<it->second<<"\n";
    // }

    // unordered_map<pair<int,int>, string>up; // not allow

    print(um);
}