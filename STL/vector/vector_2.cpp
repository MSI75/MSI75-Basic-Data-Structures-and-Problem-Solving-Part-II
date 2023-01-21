#include <bits/stdc++.h>
using namespace std;

int main()
{

    // insert
    /*
    vector<int>v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    any value and any position and any repeate
    v.insert(v.begin(),45);
    v.insert(v.begin()+2,45);
    v.insert(v.begin()+3,2,45);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    */

    // swaping
    /*
    vector<int>v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int>v2;

    v2.push_back(40);
    v2.push_back(50);
    v2.push_back(60);

    cout<<"Before swaping \n";
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\n";

    for(int i = 0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<"\n";

    swap(v1, v2);

    cout<<"After swapping \n";
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\n";

    for(int i = 0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<"\n";
    */

    // sorting

    /*
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);

    cout<<"Befor sorting \n";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<"\n";

    sort(v.begin(), v.end());

    cout<<"After sorting \n";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
    */
    //    revearse
    /*
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);

    cout << "Befor reverse \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    reverse(v.begin(), v.end());

    cout << "After reverse \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    */

    // Iterator
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);

    vector<int>::iterator it;
    for(it = v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}