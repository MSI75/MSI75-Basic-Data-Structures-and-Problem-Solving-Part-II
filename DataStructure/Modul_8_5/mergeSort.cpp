#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>arr){
    if(arr.size()<=1)
    return arr;

    int mid = arr.size()/2;

    vector<int>a;
    vector<int>b;

    for(int i = 0; i<mid; i++)
    a.push_back(arr[i]);

    for(int i = mid; i<arr.size(); i++)
    b.push_back(arr[i]);

    vector<int>sorted_a = merge_sort(a);
    vector<int>sorted_b = merge_sort(b);

    vector<int>merge;
    int j = 0;
    int k = 0;

    for(int i = 0; i<arr.size(); i++){
        if(j==sorted_a.size()){
            merge.push_back(sorted_b[k]);
            k++;
        }else if(k==sorted_b.size()){
            merge.push_back(sorted_a[j]);
            j++;
        }else if(sorted_a[j]<sorted_b[k]){
            merge.push_back(sorted_a[j]);
            j++;
        }else{
            merge.push_back(sorted_b[k]);
            k++;
        }
    }

    return merge;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    vector<int>ans = merge_sort(a);
    for(int i = 0; i<a.size(); i++){
        cout<<ans[i]<<" ";
    }

}