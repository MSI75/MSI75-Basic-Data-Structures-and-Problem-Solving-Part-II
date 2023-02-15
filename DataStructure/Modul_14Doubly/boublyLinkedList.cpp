#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class DoublyLinkedList
{
    public:
    Node *head;
    int size;

    Node *createNewNode(int data)
    {
        Node *newNode = new Node;
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

    void insertAtHead(int data)
    {
        size++;
        Node *newNode = createNewNode(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *a = this->head;
        newNode->next = a;
        a->prev = newNode;
        this->head = newNode;
    }

    void insertAnyValue(int index, int data)
    {
        if (index < 0 || index > size)
        {
            return;
        }

        if (index == 0)
        {
            insertAtHead(data);
        }

        Node *a = this->head;

        int curr_index = 0;

        while (curr_index != index - 1)
        {
            a = a->next;
            curr_index++;
        }

        Node *newNode = createNewNode(data);
        newNode->next = a->next;
        newNode->prev = a;
        Node *b = a->next;
        b->prev = newNode;
        a->next = newNode;
        size++;
    }
    // Delete at head O(1)
    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        Node *node = head;
        Node *node1 = head->next;
        delete node;

        if(node1!=NULL){
            node1->prev = NULL;
        }
        head = node1;
        size--;
    }

    void deleteAnyValue(int index)
    {
        if (index < 0 || index > size)
        {
            return;
        }

        // if (index == 0)
        // {
        //     deleteAtHead();
        // }

        Node *a = this->head;
        int curr_index = 0;
        while (curr_index != index)
        {
            a = a->next;
            curr_index++;
        }
        Node *b = a->prev;
        Node *c = a->next;
        if (b != NULL)
            b->next = c;
        if (c != NULL)
            c->prev = b;
        delete a;

        if (index == 0)
        {
            head = c;
        }

        size--;
    }

    // void reverse()
    // {
    //     if (head == NULL)
    //     {
    //         return;
    //     }

    //     Node *a = head;
    //     int curr_index = 0;
    //     while (curr_index != size - 1)
    //     {
    //         a = a->next;
    //         curr_index++;
    //     }

    //     Node *b = head;
    //     while (b != NULL)
    //     {
    //         swap(b->next, b->prev);
    //         b = b->prev;
    //     }
    //     head = a;
    // }

    void reverse(){
    if(this->head==NULL){
        return;
    }

    Node *a = head;
    int curr_index = 0;
    while(curr_index!=size-1){
        a = a->next;
        curr_index++;
    }
    Node *b = head;
    while(b!=NULL){
        swap(b->next, b->prev);
        b = b->prev;
    }
    this->head = a;
   }

    void traverse()
    {
        Node *node = head;

        while (node != NULL)
        {
            cout << node->data << " ";
            node = node->next;
        }
        cout << "\n";
    }

    int getSize()
    {
        return size;
    }
};

class Stack{
    public:
    DoublyLinkedList dl;
    Stack(){

    }

    int top(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int value){
        dl.insertAtHead(value);
    }

    void pop(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            return;
        }
        dl.deleteAtHead();
    }
};

int main()
{
   Stack s;
    s.push(5);
    cout<<s.top()<<"\n";
     s.push(6);
    cout<<s.top()<<"\n";
     s.push(7);
    cout<<s.top()<<"\n";
     s.push(8);
    cout<<s.top()<<"\n";

    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
}