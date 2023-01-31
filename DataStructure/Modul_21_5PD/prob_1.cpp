#include <bits/stdc++.h>
#define MAX_SIZE 10
using namespace std;

template <class T>

class Stack
{
public:
    T arr[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    void push(T value)
    {
        if (stack_size > MAX_SIZE)
        {
            cout << "Stack is fully!\n";
            return;
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
        arr[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            // return - 1;
            return a;
        }
        return arr[stack_size - 1];
    }
};

int main()
{
    Stack<int> s;
    s.push(7);
    cout << s.top() << "\n";
    s.push(6);
    cout << s.top() << "\n";
    s.push(5);
    cout << s.top() << "\n";
    s.push(4);
    cout << s.top() << "\n";
    s.push(3);
    cout << s.top() << "\n\n";

    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
}
