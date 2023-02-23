#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *nxt;
    Node *prv;
};

class LinkedList
{
    Node *head;
    Node *tail;
    int sz;
    Node *createNewNode(int value)
    {
        Node *node = new Node;
        node->value = value;
        node->nxt = NULL;
        node->prv = NULL;
        return node;
    }

public:
    LinkedList()
    {
        this->head = NULL;
        sz = 0;
    }
    ~LinkedList()
    {
        delete head;
    }
    void insertHead(int value)
    {
        Node *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        head->prv = newNode;
        newNode->nxt = head;
        newNode->prv = NULL;
        head = newNode;
        sz++;
    }
    void insertTail(int value)
    {
        Node *newNode = createNewNode(value);
        if (sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->nxt = newNode;
        newNode->prv = tail;
        newNode->nxt = NULL;
        tail = newNode;
        sz++;
    }
    void insertMid(int value)
    {
        Node *newNode = createNewNode(value);
        Node *a = this->head;
        if (sz == 0)
            return;
        int size = sz / 2;
        for (int i = 0; i < size; i++)
            a = a->nxt;
        newNode->prv = a->prv;
        newNode->nxt = a;
        a->prv->nxt = newNode;
        a->prv = newNode;
        sz++;
    }
    void print()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->value << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    void Merge(LinkedList a)
    {
        // Merge a at the back of this linked-list
        // Write your code
    }

    int getSize()
    {
        return sz;
    }
};
int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10
    cout << a.getSize() << "\n";

    // b.insertHead(10);
    // b.insertTail(50);
    // b.insertMid(30);
    // b.insertHead(9);
    // b.insertTail(100);
    // b.print(); // prints  9 10 30 50 100

    // a.Merge(b);
    // a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    // b.print(); // prints  9 10 30 50 100
}
