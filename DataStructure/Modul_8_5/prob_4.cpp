// #include<bits/stdc++.h>
// using namespace std;

// vector<int>merge_sort(vector<int>arr, int k){
//     if(arr.size()<=1){
//         return arr;
//     }

//     int mid = arr.size()/2;

//     vector<int>a;
//     vector<int>b;

//     for(int i = 0; i<mid; i++)
//     a.push_back(arr[i]);

//     for(int i = mid; i<arr.size(); i++)
//     b.push_back(arr[i]);

//     vector<int>sorted_a = merge_sort(a, k);
//     vector<int>sorted_b = merge_sort(b, k);

//     vector<int>merge;
//     int idx1 = 0; 
//     int idx2 = 0;
//     int flog = 0;
//     for(int i = 0 ; i<arr.size(); i++){
//         if(sorted_a[idx1]+sorted_b[idx2]==k){
//             flog = 1;
//             break;
//         }
//     }
// }


#include <iostream>
using namespace std;

bool check_sum(int arr[], int left, int mid, int right, int k) {
    int i = left, j = mid + 1;
    while (i <= mid && j <= right) {
        if (arr[i] + arr[j] == k) {
            return true;
        } else if (arr[i] + arr[j] < k) {
            i++;
        } else {
            j++;
        }
    }
    return false;
}

bool merge_sort(int arr[], int left, int right, int k) {
    if (right > left) {
        int mid = (left + right) / 2;
        if (merge_sort(arr, left, mid, k) || merge_sort(arr, mid + 1, right, k)) {
            return true;
        }
        return check_sum(arr, left, mid, right, k);
    }
    return false;
}

bool check_sum_in_array(int arr[], int n, int k) {
    return merge_sort(arr, 0, n - 1, k);
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    if (check_sum_in_array(arr, n, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
