#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;
    q.push("ABC");
    q.push("DEF");
    q.push("JFL");
    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
}