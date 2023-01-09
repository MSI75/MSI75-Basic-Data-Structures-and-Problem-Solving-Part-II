#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>arr, int k){
    if(arr.size()<=1){
        return arr;
    }

    int mid = arr.size()/2;

    vector<int>a;
    vector<int>b;

    for(int i = 0; i<mid; i++)
    a.push_back(arr[i]);

    for(int i = mid; i<arr.size(); i++)
    b.push_back(arr[i]);

    vector<int>sorted_a = merge_sort(a, k);
    vector<int>sorted_b = merge_sort(b, k);

    vector<int>merge;
    int idx1 = 0; 
    int idx2 = 0;
    int flog = 0;
    for(int i = 0 ; i<arr.size(); i++){
        if(sorted_a[idx1]+sorted_b[idx2]==k){
            flog = 1;
            break;
        }
    }
}