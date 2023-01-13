// #include<bits/stdc++.h>
// using namespace std;

// int merge_sort(int *arr[], int n){
//     if(n<=1)
//     return *arr;

//     int mid = n/2;

//     vector<int>a;
//     vector<int>b;

//     for(int i = 0; i<mid; i++)
//     a.push_back(*arr[i]);

//     for(int i = mid; i<n; i++)
//     b.push_back(*arr[i]);

//     vector<int>sorted_a = merge_sort(a);
//     vector<int>sorted_b = merge_sort(b);

//     vector<int>merge;
//     int j = 0, k = 0, count = 0;

//     for(int i = 0; i<arr.size(); i++){
//         if(j<k && sorted_a[i]<sorted_b[j]){
//             // 
//         }
//     }

//     return merge;
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);

//     for(int i = 0; i<n; i++)
//     cin>>a[i];

//     vector<int>ans = merge_sort(a);

//     for(int i = 0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }



#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k;
    int inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }

    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
    return inv_count;
}

int _mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int countInversions(int arr[], int n) {
    int temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Number of inversions: " << countInversions(arr, n) << endl;
    return 0;
}

