#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    list<int> li = {1, 2, 6, 3, 4, 5, 6, 6};

    list<int>::iterator it, it1;
    it = li.begin();
    it1 = li.begin();
    advance(it, 3);

    // li.erase(it);
    // li.erase(it1, it);

    // remove value
    // li.remove(6);

    // li.reverse();

    // li.sort();

    // unique function same value not allaw
    li.unique();

    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << "\n";
    */

    list<int> li = {1, 2, 3, 4};
    list<int> li1 = {4, 3, 2, 1};

    // swap
    //    li.swap(li1);
    //    for(auto it : li) cout<<it<<" ";
    //    cout<<"\n";

    //    for(auto it:li1) cout<<it<<" ";
    //    cout<<"\n";

    // merge 
    li.merge(li1);
    for(auto it:li)cout<<it<<" ";
    cout<<"\n";
}