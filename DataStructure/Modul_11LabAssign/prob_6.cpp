#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int low, int high, int k) {
   if(high>=low) {
       int mid = (low + high)/2;
       if((mid==0 || arr[mid-1]<k) && arr[mid]==k)
           return mid;
       else if(arr[mid]>k)
           return firstOccurrence(arr, low, mid-1, k);
       else
           return firstOccurrence(arr, mid+1, high, k);
   }
   return -1;
}

int lastOccurrence(int arr[], int low, int high, int k) {
   if(high>=low) {
       int mid = (low+high)/2;
       if((mid==high || arr[mid+1]>k) && arr[mid]==k)
           return mid;
       else if(arr[mid]>k)
           return lastOccurrence(arr, low, mid-1, k);
       else
           return lastOccurrence(arr, mid+1, high, k);
   }
   return -1;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i<n; i++){
       cin>>arr[i];
   }
   int k;
   cin>>k;
   int first = firstOccurrence(arr, 0, n-1, k);
   int last = lastOccurrence(arr, 0, n-1, k);
   if(last - first >= 1)
       cout << "YES" << endl;
   else
       cout << "NO" << endl;
   return 0;
}

