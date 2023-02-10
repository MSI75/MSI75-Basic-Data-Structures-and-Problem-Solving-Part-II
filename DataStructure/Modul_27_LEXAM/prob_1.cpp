#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
   T *arr;
   int l, r, cap_arr, sz;

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

           for (int i = 0; i < r; i++)
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

public:
   Queue()
   {
       arr = new T[1];
       l = 0;
       r = -1;
       cap_arr = 1;
       sz = 0;
   }

   void enqueue(T value)
   {
       if (sz == cap_arr)
       {
           increase();
       }
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
           l = 0;
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
};

int main()
{
   Queue<char> q;
   q.enqueue('a');
   q.enqueue('b');
   q.enqueue('c');
   cout << q.front() << "\n";
   q.dequeue();
   cout << q.front() << "\n";
   q.dequeue();
   cout << q.front() << "\n";
}
