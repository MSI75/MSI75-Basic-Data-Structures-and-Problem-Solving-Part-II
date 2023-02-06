#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
    T *arr;
    int cap_arr, l, r, sz;

public:
    Queue()
    {
        arr = new T[1];
        l = 0;
        r = -1;
        cap_arr = 1;
        sz = 0;
    }

    void remove_circuler()
    {
        if (l > r)
        {
            T *temp = new T[cap_arr];
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

    void inrease()
    {
        remove_circuler();
        T *temp = new T[cap_arr * 2];
        for (int i = 0; i < cap_arr; i++)
        {
            temp[i] = arr[i];
        }
        swap(temp, arr);
        cap_arr = cap_arr * 2;
        delete[] temp;
       
    }

    void enqueue(T value)
    {
        if (sz == cap_arr)
        {
            inrease();
        }

        r++;
        if (r == cap_arr)
            r = 0;
        arr[r] = value;
         sz++;
    }

    void dequeue(){
        if(sz==0){
            cout<<"Queue is empty!\n";
            return;
        }

        l++;
        if(l==cap_arr) l = 0;
        sz--;
    }

    T front(){
        if(sz==0){
            cout<<"Queue is empty!\n";
            T a;
            return a; 
        }
        return arr[l];
    }

    T getSize(){
        return sz;
    }
};

int main(){
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