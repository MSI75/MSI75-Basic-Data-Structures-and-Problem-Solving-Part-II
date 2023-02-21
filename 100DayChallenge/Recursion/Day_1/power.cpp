#include<bits/stdc++.h>
using namespace std;

int power(int n){
    // base case 
    if(n==0) return 1;

    // Recursive Relation 
    // int smallProblem = power(n-1);
    // int bigProblem = 2 * smallProblem;
    // return bigProblem;

    return 2*power(n-1);
}


int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<"\n";
}