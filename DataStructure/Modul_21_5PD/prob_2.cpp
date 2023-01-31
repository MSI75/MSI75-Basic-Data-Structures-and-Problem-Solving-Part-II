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

class singlyLinkedList
{
    public:
    Node<T> *head;
    int size;

    Node<T> *createNewNode(T value)
    {
        Node<T> *newNode = new Node<T>;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    singlyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    ~singlyLinkedList()
    {
        delete head;
    }

    void inseartAtHead(T value)
    {
        Node<T> *node = createNewNode(value);
        size++;
        if (head == NULL)
        {
            head = node;
            return;
        }

        node->next = head;
        head = node;
    }

    void deleteAtHead()
    {
        if (head == NULL)
            return;
        
        size--;
        Node<T> *node = head;
        head = node->next;
        delete node;
    }

    int getSize(){
        return size;
    }
};

template<class T>
class Stack{
    public:
    singlyLinkedList<T>sl;
    Stack(){}

    void push(T value){
        sl.inseartAtHead(value);
    }

    void pop(){
        sl.deleteAtHead();
    }

    T top(){
        if(sl.getSize()==0){
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return sl.head->data;
    }

    T getSize(){
        return sl.getSize();
    }

};

int main(){
    Stack<int>sl;
    sl.push(7);
    sl.push(6);
    sl.push(8);
    sl.push(4);
    sl.push(9);

    while(sl.getSize()>0){
        cout<<sl.top()<<"\n";
        sl.pop();
    }

}