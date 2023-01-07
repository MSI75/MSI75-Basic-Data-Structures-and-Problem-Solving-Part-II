// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);

//     for(int i = 0; i<n ;i++){
//         cin>>a[i];
//     }

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i-1; j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j], a[j+1]);
//             }

//             cout<<"step :- ";
//         for(int i = 0; i<n ;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
//         }
//         cout<<"I :- ";
//         for(int i = 0; i<n ;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
//     }

//     for(int i = 0; i<n ;i++){
//         cout<<a[i]<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1])
            ans++;
    cout << ans;
    return 0;
}
