#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int char_code;
    for(int i = 0; i<s.size(); i++){
        if(i%2==0){
            char d = 'z'-s[i];
        if(d>=1){
            s[i]+=1;
        }else{
            s[i]+=d;
            char d2 = 1 - d;
            s[i] = ('a'+ d2) - 1;
        }
        }
    }
    cout<<s<<" ";
}