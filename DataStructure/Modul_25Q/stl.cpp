#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(7);
    q.push(5);
    q.push(9);

    cout << "size : " << q.size() << "\n";

    cout << q.front() << "\n";
    q.pop();

    cout << q.front() << "\n";
    q.pop();

    cout << q.front() << "\n";
    q.pop();

    cout << "size : " << q.size() << "\n";
}