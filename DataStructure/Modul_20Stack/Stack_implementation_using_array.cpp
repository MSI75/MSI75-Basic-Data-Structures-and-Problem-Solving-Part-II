
// static implementation using array
#include <bits/stdc++.h>
#define MAX_SIZE 500
using namespace std;

template<class T>
class Stack
{
public:
    T arr[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    // Add an element in the stack O(1)
    void push(T value)
    {
        if (stack_size > MAX_SIZE)
        {
            cout << "stack is fully !\n";
            return;
        }
        stack_size = stack_size + 1;
        arr[stack_size - 1] = value;
    }

    // Delete the topmost element from the stack O(1)

    void pop()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!\n";
            return;
        }
        arr[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    // return the top element from the stack O(1)
    T top()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!\n";
            return -1;
        }
        return arr[stack_size - 1];
    }
};

int main()
{
    Stack<int>s;
    // Stack s;
    s.push(5);
    cout << s.top() << "\n";
    s.push(6);
    cout << s.top() << "\n";
    s.push(7);
    cout << s.top() << "\n";
    s.push(8);
    cout << s.top() << "\n";
    s.push(9);
    cout << s.top() << "\n";

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
    s.pop();
}