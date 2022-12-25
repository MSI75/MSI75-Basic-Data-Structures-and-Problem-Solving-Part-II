#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int sum = 0;
    for(int i = 0; i<n; i++)
    sum+=arr[i];

    cout<<sum<<endl;

    int mult = 1; 
    for(int i = 0; i<n; i++)
    mult*=arr[i];

    cout<<mult<<endl;
    return 0;
}