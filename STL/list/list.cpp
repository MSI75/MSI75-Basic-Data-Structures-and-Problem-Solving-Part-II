#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list declaretion 
    // list<int> li;
    // li.push_back(1);
    // li.push_back(2);
    // li.push_back(3);
    // li.push_back(4);
    // li.push_front(5);
    // li.push_front(6);
    // li.push_front(7);

    // list print 

    // list<int>::iterator it;
    // for(it = li.begin(); it!=li.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<"\n";

    // li.pop_front();
    // li.pop_back();
    // li.clear();
    // for(auto it : li){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    // cout<<li.size()<<"\n";

    // if(li.empty())cout<<"Empty\n";
    // else cout<<"Not Empty\n";

    // cout<<li.front()<<"\n";
    // cout<<li.back()<<"\n";

    // insert 
    list<int>li;
    li.push_back(15);
    li.push_back(25);
    li.push_back(35);
    li.push_back(45);

    list<int>::iterator it;
    it = li.begin();
    advance(it, 3);

    // li.insert(li.begin(),2, 75);
    li.insert(it, 2, 30);
    for(auto it:li){
        cout<<it<<" ";
    }cout<<"\n";
}