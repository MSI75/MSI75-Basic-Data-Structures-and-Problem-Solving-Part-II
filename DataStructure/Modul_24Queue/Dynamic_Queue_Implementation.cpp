#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int cap_arr;
    int l, r;
    int sz;
    Queue()
    {
        arr = new int[1];
        cap_arr = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void remove_circular()
    {
        if (l > r)
        {
            int *temp = new int[cap_arr];
            int idx = 0;
            for (int i = l; i < cap_arr; i++)
            {
                temp[idx] = arr[i];
                idx++;
            }

            for (int i = 0; i <= r; i++)
            {
                temp[idx] = arr[i];
                idx++;
            }
            swap(temp, arr);
            l = 0;
            r = cap_arr - 1;
            delete[] temp;
        }
    }

    void increase()
    {
        remove_circular();

        int *temp = new int[cap_arr * 2];
        for (int i = 0; i < cap_arr; i++)
            temp[i] = arr[i];
        swap(arr, temp);
        cap_arr = cap_arr * 2;
        delete[] temp;
    }

    void enqueue(int value)
    {
        if (sz == cap_arr)
            increase();

        r++;
        if (r == cap_arr)
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
        if (l == cap_arr)
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

int main(){
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