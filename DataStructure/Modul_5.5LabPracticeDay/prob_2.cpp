#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int sum = 1;
     
    for(int i = 0; i<n; i++){
        if(i%2!=0){
            sum*=a[i];
        }
    }
    cout<<sum<<"\n";
    return 0;
}