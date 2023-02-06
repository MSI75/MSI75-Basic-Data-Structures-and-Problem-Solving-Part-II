#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
};

template <class T>
class Queue
{
public:
    Node<T> *head;
    Node<T> *tail;
    int sz;
    Queue()
    {
        head = NULL;
        sz = 0;
    }
    Node<T> *createNewNode(T value)
    {
        Node<T> *node = new Node<T>;
        node->data = value;
        node->next = NULL;
        return node;
    }

    void enqueue(T value)
    {
        sz++;
        Node<T> *newNode = createNewNode(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node<T> *node = head;
        head = head->next;
        sz--;
        delete node;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }

    T getSize()
    {
        return sz;
    }
};

int main()
{
    Queue<int> q;
    q.enqueue(7);
    q.enqueue(5);
    q.enqueue(6);

    cout << "size : " << q.getSize() << "\n";

    cout << q.front() << "\n";
    q.dequeue();

    cout << q.front() << "\n";
    q.dequeue();

    cout << q.front() << "\n";
    q.dequeue();

    cout << "size : " << q.getSize() << "\n";
}