#include<bits/stdc++.h>
using namespace std;

void print(list<int>l){
    auto it = l.begin();
    while(it != l.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
}

int getValue(list<int>l,int index){
   if(index>=l.size()) return -1;

   auto it = l.begin();
   advance(it, index);
   return *it;
    
}


int main(){
    list<int>l={3,2,6,4,5};
    print(l);

    cout<<getValue(l, 3)<<"\n";
}