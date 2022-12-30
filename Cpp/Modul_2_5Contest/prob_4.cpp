#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    
    vector<long long int>a;
    a.resize(n);
    for(int i = 0; i<n; i++)
    cin>>a[i];
    sort(a.begin(), a.end());

    // int minimum;
    // for(int i = 0; i<n; i++){
    //     minimum = a[n-2];
    // }
    // cout<<minimum<<"";


    int max = a[0];

    for(int i = 0; i<n; i++){
        if(max<a[i])
        max = a[i];
    }
    int freq[max+1]={0};

    for(int i = 0; i<n; i++){
        freq[a[i]]++;
    }

    int count = 0;
    for(int i = 0; i<=max; i++){
        if(freq[i]==1){
            count++;
        }

       
    }
    

 
    return 0;
}