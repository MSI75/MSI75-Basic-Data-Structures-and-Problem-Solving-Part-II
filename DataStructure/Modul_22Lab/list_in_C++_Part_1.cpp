#include<bits/stdc++.h>
using namespace std;

void print(list<int>l){
    // list<int>::iterator a = l.begin();
    auto a = l.begin();
    // O(n)
    while (a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
    
}
// O(n)
void inseart(list<int>&l, int index, int value){
    auto it = l.begin(); // O(1)
    advance(it, index);  // O(n)
    l.insert(it, value); // O(1)
}

// O(n)
void Delete(list<int>&l, int index){
    auto it = l.begin(); // O(1)
    advance(it, index); // O(n)
    l.erase(it); // O(1)
}

int main(){
    list<int>l;
    // O(1)
    l.push_front(7);
    l.push_front(5);
    l.push_front(3);

    print(l);

    l.push_back(9);
    l.push_back(2);
    print(l);

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);

    inseart(l, 1, 100);
    print(l);

    Delete(l,2);
    print(l);

    cout<<l.size()<<"\n";


}