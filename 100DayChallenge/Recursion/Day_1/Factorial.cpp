#include<bits/stdc++.h>
using namespace std;

int Factorial(int n){
    // base case 
    if(n==0) return 1;

    // Recursive Relation 

    // int smallProblem = Factorial(n-1);
    // int bigProblem = n * smallProblem;
    // return bigProblem;

    return n*Factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = Factorial(n);

    cout<<ans<<"\n";
}