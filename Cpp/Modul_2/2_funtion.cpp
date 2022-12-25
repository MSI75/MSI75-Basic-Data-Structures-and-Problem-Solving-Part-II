#include<bits/stdc++.h>
using namespace std;

// string erase_first_last(string s){
//     s.erase(s.begin());
//     s.pop_back();
//     return s;
// }

// void erase_first_last(string &s){
//     s.erase(s.begin());
//     s.pop_back();
//     cout<<s<<endl;
// }

void swaping(int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}


int main(){
    // string s;
    // getline(cin, s);
    // // string ans = erase_first_last(s);
    // // cout<<ans<<endl;
    // erase_first_last(s);
    // cout<<s<<endl;

    int a , b;
    cin>>a>>b;
    swaping(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}