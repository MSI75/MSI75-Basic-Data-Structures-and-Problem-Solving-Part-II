#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(7);
    s.push(5);
    s.push(9);
    s.push(3);

    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
}