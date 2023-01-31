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
class DoublyLinkedList
{
public:
    Node<T> *head;
    int size;

    Node<T> *createNewNode(T value)
    {
        Node<T> *node = new Node<T>;
        node->data = value;
        node->next = NULL;
        node->prev = NULL;
        return node;
    }
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    void inseartAtHead(T value)
    {
        Node<T> *node = createNewNode(value);
        size++;

        if (head == NULL)
        {
            head = node;
        }

        Node<T> *a = head;
        node->next = a;
        a->prev = node;
        head = node;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        Node<T> *node = head;
        Node<T> *node1 = head->next;
        delete node;

        if (node1 != NULL)
        {
            node1->prev = NULL;
        }
        head = node1;
        size--;
    }

    int getSize()
    {
        return size;
    }
};

template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    // Stack(){}

    void push(T value)
    {
        dl.inseartAtHead(value);
    }

    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        dl.deleteAtHead();
    }

    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    int getSize()
    {
        return dl.getSize();
    }
};

int main()
{
    Stack<int> dl;
    dl.push(7);
    dl.push(4);
    dl.push(9);
    dl.push(2);
    dl.push(10);

    // while(dl.getSize()>0){
    //     cout<<dl.top()<<" ";
    //     dl.pop();
    // }
    
    Stack<int>temp;

    while(dl.getSize()>0){
        temp.push(dl.top());
        dl.pop();
    }

    swap(dl,temp);

    while(dl.getSize()>0){
        cout<<dl.top()<<" ";
        dl.pop();
    }
    cout<<"\n\n";

}