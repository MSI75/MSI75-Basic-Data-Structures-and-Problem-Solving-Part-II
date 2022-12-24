// namespace akta scop create kore, kono akta coder koson ke, jeta golobally ace

#include<bits/stdc++.h>

using namespace std;

// int x = 5;

// int func(int a, int b){
//     return a+b;
// }

namespace info{
   int x = 10;
   int func(int a , int b){
    return a*b;
   }
//    cout;
//    cin;
//    endl;
}

using namespace info;
int main(){
    int a = 5, b = 6;
    cout<<x<<endl;
    cout<<func(a, b)<<endl;
    cout<<info::func(a,b)<<endl;
    return 0;
}