#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500

class Queue
{
public:
    int arr[MAX_SIZE];
    int l, r;
    int sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int value)
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

    int front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[l];
    }

    int getSize()
    {
        return sz;
    }
};

int main()
{
    Queue q;
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
