#include <bits/stdc++.h>
#define SIZE 100
using namespace std;

class Queue
{
    int arr[SIZE];
    int l, r, sz;

public:
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int value)
    {
        if (sz == SIZE)
        {
            cout << "Queue is fully!\n";
            return;
        }
        r++;
        if (r == SIZE)
            r = 0;
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
        if (l == SIZE)
            l = 0;
        sz--;
    }

    int front(){
         if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[l];
    }
};

int main(){
    Queue q;
    q.enqueue(7);
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);


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

}

