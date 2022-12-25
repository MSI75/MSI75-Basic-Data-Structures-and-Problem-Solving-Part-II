#include<bits/stdc++.h>
using namespace std;

int main(){
    // int *p = new int;
    // *p = 10;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // delete p;

    int n;
    cin>>n;

    int *p = new int[n];

    for(int i = 0; i<n; i++)
    cin>>p[i];

    cout<<p<<endl;

    for(int i = 0; i<n; i++)
    cout<<p[i]<<"\n";

    delete[] p;

    return 0;

}