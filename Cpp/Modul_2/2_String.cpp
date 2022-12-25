#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "I am eating rich.";
    string s1 = "I am also eating dal.";

    string s3 = s + s1;
    cout<<s3<<endl;

    int a =s.size();
    cout<<a<<endl;

    // for(int i = 0; i<s.size(); i++){
    //     s[i]=s[i]+1;
    // }
    // cout<<s<<endl;
    // s.erase(s.begin()+3);
    // s.erase(s.begin()+s.size()-1);
    
    s.pop_back();
    cout<<s<<endl;
}