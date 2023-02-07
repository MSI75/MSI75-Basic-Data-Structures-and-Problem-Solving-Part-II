#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Deque
{
public:
    Node *head;
    Node *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    ~Deque()
    {
        delete head;
    }
    Node *createNewNode(int value)
    {

        Node *node = new Node;
        node->data = value;
        node->prev = NULL;
        node->next = NULL;
        return node;
    }

    // O(1)
    void push_back(int value)
    {

        Node *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        sz++;
    }

    // O(1)
    void push_front(int value)
    {
        Node *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return;
        }

        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        Node *a = tail;
        tail = tail->prev;
        delete a;
        tail->next = NULL;
        sz--;
    }

    void pop_front()
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

        Node *a = head;
        head = head->next;
        delete a;
        head->prev = NULL;
        sz--;
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }

        return head->data;
    }

    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        return tail->data;
    }

    int getSize()
    {
        return sz;
    }
};

int main()
{
    Deque d;
    d.push_back(4);
    d.push_back(5);
    d.push_back(7);
    cout << "Back : "<<d.back()<<" "<<"Front : "<<d.front()<<"\n";

    d.push_front(9);
    d.push_front(6);
    cout << "Back : "<<d.back()<<" "<<"Front : "<<d.front()<<"\n";

    d.pop_back();
    d.pop_front();
    cout << "Back : "<<d.back()<<" "<<"Front : "<<d.front()<<"\n";
}