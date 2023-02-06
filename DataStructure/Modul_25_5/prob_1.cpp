#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500

template<class T>
class Queue
{
public:
    T arr[MAX_SIZE];
    int l, r;
    int sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(T value)
    {
        if (sz == MAX_SIZE)
        {
            cout << "Queue is fully!\n";
            return;
        }
        r++;
        if (r == MAX_SIZE)
        {
            r = 0;
        }
        arr[r] = value;
        sz++;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        if (l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            T a;
            return a;
        }
        return arr[l];
    }

    T getSize()
    {
        return sz;
    }
};

int main()
{
    Queue<int>q;
    q.enqueue(7);
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);

    cout << "size : " << q.getSize() << "\n";
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << "size : " << q.getSize() << "\n";
}
