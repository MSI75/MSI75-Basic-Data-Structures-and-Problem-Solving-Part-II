#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
     cin>>n;
     while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
           n=n/2;
        }
       
        else{
            n = n * 3 + 1;
        }
     }
     cout<<n<<"\n";
     return 0;
}