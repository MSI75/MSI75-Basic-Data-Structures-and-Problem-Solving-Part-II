#include <bits/stdc++.h>
using namespace std;

class RomanToInteger
{
public:
    int romanTointeger(string s)
    {
        unordered_map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 100},
        };

        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            if(map[s[i]]<map[s[i+1]])
                ans = ans - s[i];
            else
                ans = ans + s[i];
            
        }
        return ans;
    }
};

int main(){
    string s;
    cin>>s;
     unordered_map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 100},
        };

        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            if(map[s[i]]<map[s[i+1]])
                ans = ans - s[i];
            else
                ans = ans + s[i];
            
        }
       cout<<ans<<"\n";
}