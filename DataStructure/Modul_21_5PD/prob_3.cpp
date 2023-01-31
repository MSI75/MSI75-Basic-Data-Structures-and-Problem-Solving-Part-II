#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
    public:
    T *arr;
    int stack_size;
    int cap_size;
    void inrease()
    {
        T *temp;
        temp = new T[cap_size * 2];
        for (int i = 0; i < cap_size; i++)
        {
            temp[i] = arr[i];
        }
        delete temp;
        cap_size = cap_size * 2;
    }


    Stack()
    {
        arr = new T[1];
        cap_size = 1;
        stack_size = 0;
    }
    void push(T value)
    {
        if (stack_size > cap_size)
        {
            inrease();
        }

        stack_size = stack_size + 1;
        arr[stack_size - 1] = value;
    }

    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        stack_size = stack_size - 1;
    }

    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
            return -1;
        }

        return arr[stack_size - 1];
    }
};

int main()
{
    Stack<int> dr;
    dr.push(4);
    // cout<<dr.top()<<"\n";
    dr.push(5);
    // cout<<dr.top()<<"\n";
    dr.push(9);
    // cout<<dr.top()<<"\n";
    dr.push(3);
    // cout<<dr.top()<<"\n\n";

    while(dr.stack_size>0){
        cout<<dr.top()<<"\n";
        dr.pop();
    }

//     dr.pop();
//     cout<<dr.top()<<"\n";
//     dr.pop();
//     cout<<dr.top()<<"\n";
//     dr.pop();
//     cout<<dr.top()<<"\n";
}