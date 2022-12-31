#include<bits/stdc++.h>
using namespace std;
/*
Time complexity = O(n)
Memory complexity = O(n)
*/

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<n; i++){
        if(a[i]==k){
            cout<<"YES\n";
            // return 0;
        }
    }

    for(int i = 0; i<n; i++){
        if(a[i]==k)
        cout<<i<<"\n";
    }
}