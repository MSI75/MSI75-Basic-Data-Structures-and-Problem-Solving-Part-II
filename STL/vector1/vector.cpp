#include <bits/stdc++.h>
using namespace std;

// void printVec(vector<int> &v)
// {
//     cout << "Size : " << v.size() << "\n";
//     for (int i = 0; i < v.size(); ++i)
//     {
//         // vector size -> O(1)
//         cout << v[i] << " ";
//     }
//     v.push_back(4);
//     cout << "\n";
// }


void printVec(vector<string> &v)
{
    cout << "Size : " << v.size() << "\n";
    for (int i = 0; i < v.size(); ++i)
    {
        // vector size -> O(1)
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     printVec(v);
    //     v.push_back(x);
    // }
    // printVec(v);

    // vector<int> v(5);
    // printVec(v);

    // vector<int>v(10,3);
    // printVec(v);

    // copy
    // vector<int> v1;
    // v1.push_back(7);
    // v1.push_back(5);
    // v1.push_back(3);

    /*
    vector<int>v2 = v1;
    v2.push_back(9);
    printVec(v1); // 7 5 3
    */

    // vector<int> &v2 = v1; // O(n)
    // v2.push_back(9);
    // printVec(v1); // 7 5 3 9
    // printVec(v1); // 7 5 3 9 4
    // printVec(v2); // 7 5 3 9 4 4


    vector<string>v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string s1;
        cin>>s1;
        v.push_back(s1);
    }

    printVec(v);
}