#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int cap_size;
    int stack_size;

    Stack()
    {
        arr = new int[1];
        stack_size = 0;
        cap_size = 1;
    }

    void decrease()
    {
        int *temp;
        temp = new int[cap_size / 2];
        for (int i = 0; i < cap_size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] temp;
        cap_size = cap_size / 2;
    }

    void push(int value)
    {
        if (stack_size < cap_size / 2)
        {
            decrease();
        }
        stack_size = stack_size + 1;
        arr[stack_size - 1] = value;
    }

    void pop()
    {
        if (stack_size < cap_size / 2)
        {
            decrease();
        }
        stack_size = stack_size - 1;
    }

    int top()
    {
        if (stack_size < cap_size / 2)
        {
            decrease();
        }
        return arr[stack_size - 1];
    }
};

int main()
{
    Stack s;
    s.push(7);
    s.push(9);
    s.push(2);
    s.push(5);

    s.pop();
    s.pop();
    s.pop();
    // s.pop();
    //  s.pop();

    while(s.stack_size>0){
        cout<<s.top()<<" ";
        s.pop();
    }
}