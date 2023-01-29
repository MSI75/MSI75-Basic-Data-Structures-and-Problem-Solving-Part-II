
// static implementation using array
#include <bits/stdc++.h>
#define MAX_SIZE 500
using namespace std;

class Stack
{
public:
    int arr[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    // Add an element in the stack O(1)
    void push(int value)
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
    int top()
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
    Stack s;
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