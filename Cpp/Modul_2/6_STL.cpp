#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 5, b = 6, c = 7;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;

    // int mini = min(a,c);
    // cout<<mini<<"\n";

    //  int mini = min({a,b,c});
    //     cout<<mini<<"\n";

    // int maxi = max({a,b,c});
    // cout<<maxi<<endl;


    vector<int>s ={2,5,3,4,1};

    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout<<"\nSort :- ";

    // sort(s.begin()+0,s.end());

    sort(s.begin()+1,s.begin()+2+1);
    
    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }

}