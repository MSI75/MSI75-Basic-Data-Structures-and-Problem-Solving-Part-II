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
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    Node *createNewNode(int value)
    {
        Node *node = new Node;
        node->data = value;
        node->prev = NULL;
        node->next = NULL;
        return node;
    }

    void inseartAtHead(int value)
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

    void inseartAtTail(int value)
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

    void deleteAtHead()
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

    void deleteAtTail()
    {
        if (sz == 0)
        {
            cout << "Qeque is empty!\n";
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

    void push_front(int value)
    {
        if (rev == 0)
            inseartAtHead(value);
        else
            inseartAtTail(value);
    }

    void push_back(int value)
    {
        if (rev == 0)
            inseartAtTail(value);
        else
            inseartAtHead(value);
    }

    void pop_front()
    {
        if (rev == 0)
            deleteAtTail();
        else
            deleteAtHead();
    }

    void pop_back()
    {
        if (rev == 0)
            deleteAtHead();
        else
            deleteAtTail();
    }

    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        if (rev == 0)
            return tail->data;
        else
            return head->data;
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        if (rev == 0)
            return head->data;
        else
            return tail->data;
    }

    void reverse_deque()
    {
        if (rev == 0)
            rev = 1;
        else
            rev = 0;
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.push_front(20);
    d.reverse_deque();
    cout << "Back : " << d.back() << " "
         << "Front : " << d.front() << "\n";

    d.pop_front();
    cout << "Back : " << d.back() << " "
         << "Front : " << d.front() << "\n";

    d.pop_back();
    cout << "Back : " << d.back() << " "
         << "Front : " << d.front() << "\n";
}