#include <bits/stdc++.h>
using namespace std;

template<class T>
class Node
{
public:
    T data;
    Node *next;
    Node *prev;
};

template<class T>
class DoublyLinkedList
{
public:
    Node<T> *head;
    int size;

    Node<T> *createNewNode(T data)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    DoublyLinkedList()
    {
        this->head = NULL;
        this->size = 0;
    }

    ~DoublyLinkedList()
    {
        delete head;
    }

    void insertAtHead(T data)
    {
        size++;
        Node<T> *newNode = createNewNode(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node<T> *a = this->head;
        newNode->next = a;
        a->prev = newNode;
        this->head = newNode;
    }

    // Delete at head O(1)
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

template<class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {
    }

    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
            // return -1;
        }
        return dl.head->data;
    }

    void push(int value)
    {
        dl.insertAtHead(value);
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
};

int main()
{
   Stack<int>st;
    st.push(4);
    st.push(5);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    
    Stack<char>st1;
    st1.push('a');
    st1.push('b');
    st1.push('c');
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
    st1.pop();
    cout<<st1.top()<<"\n";
}
