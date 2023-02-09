#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
    Node *prev;
};

template <class T>
class Deque
{
    Node<T> *head;
    Node<T> *tail;
    int sz;
    int rev;
    Node<T> *createNewNode(T value)
    {
        Node<T> *node = new Node<T>;
        node->data = value;
        node->prev = NULL;
        node->next = NULL;
        return node;
    }

    void inseartAtHead(T value)
    {
        Node<T> *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        newNode->prev = NULL;
        head = newNode;
        sz++;
    }

    void inseartAtTail(T value)
    {
        Node<T> *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;
        tail = newNode;
        sz++;
    }

    void DeleteAtHead()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
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

        Node<T> *a = head;
        head = a->next;
        delete a;
        head->prev = NULL;
        sz--;
    }

    void DeleteAtTail()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
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
        Node<T> *a = tail;
        tail = a->prev;
        delete a;
        tail->next = NULL;
        sz--;
    }

public:
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    void push_front(T value)
    {
        if (rev == 0)
            inseartAtHead(value);
        else
            inseartAtTail(value);
    }

    void push_back(T value)
    {
        if (rev == 0)
            inseartAtTail(value);

        else
            inseartAtHead(value);
    }

    void pop_back()
    {
        if (rev == 0)
            DeleteAtTail();
        else
            DeleteAtHead();
    }

    void pop_front()
    {
        if (rev == 0)
            DeleteAtHead();
        else
            DeleteAtTail();
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            T a;
            return a;
        }
        if (rev == 0)
            return head->data;
        else
            return tail->data;
    }

    T back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            T a;
            return a;
        }
        if (rev == 0)
            return tail->data;
        else
            return head->data;
    }

    T getSize()
    {
        return sz;
    }
    void revers_base()
    {
        if (rev == 0)
            rev = 1;
        else
            rev = 0;
    }
};

int main()
{
    Deque<int> d;
    d.push_back(5);
    d.push_back(6);
    d.push_back(3);
    d.push_back(7);
    d.revers_base();
    cout << "Front : " << d.front() << "   "
         << "Back : " << d.back() << "\n";  

    d.push_front(8);
    d.push_front(9);
    d.push_back(10);
    d.revers_base();
    cout << "Front : " << d.front() << "   "
         << "Back : " << d.back() << "\n"; 

    d.pop_back();
    d.pop_front();
    cout << "Front : " << d.front() << "   "
         << "Back : " << d.back() << "\n"; 
}