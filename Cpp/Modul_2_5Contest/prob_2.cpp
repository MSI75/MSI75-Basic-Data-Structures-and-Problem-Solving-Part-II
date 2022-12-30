#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    // getline(cin, s);
    cin>>s;

    long int a = 0, c = 0, g = 0, t = 0;
    for(int i = 0; i<sizeof(s); i++){
        if(s[i]=='A')
            a++;

        if(s[i]=='C')
            c++;
        
        if(s[i]=='G')
            g++;
        
        if(s[i]=='T')
            t++;
        
    }

    int mxi = max({a,c,g,t});
    cout<<mxi<<"\n";

    return 0;
}