#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   long long int n;
    cin>>n;
    vector<int>a;
    a.resize(n);

    for(int i = 1; i<n; i++){
        cin>>a[i];
        a[i] = 1;
    }

    for(int i = 1; i<=n; i++){
        if(a[i]==1){
            continue;
        }

        cout<<i<<"\n";
    }
    return 0;
}