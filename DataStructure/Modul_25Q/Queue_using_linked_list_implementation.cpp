#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
public:
    Node *head;
    Node *tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node *createNewNode(int value){
        Node *node = new Node;
        node->data = value;
        node->next = NULL;
        return node;
    }

    void enqueue(int value){
        sz++;
        Node *newNode = createNewNode(value);

        if(head==NULL){
            head=newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue(){
        if(sz==0){
            cout<<"Queue is empty!\n";
            return;
        }
        
        if(sz==1){
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node *a = head;
        head = head->next;
        sz--;
        delete a;
    }

    int front(){
        if(sz==0){
            cout<<"Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

    int getSize(){
        return sz;
    }
};

int main(){
    Queue q;
    q.enqueue(7);
    q.enqueue(5);
    q.enqueue(6);

    cout<<"size : "<<q.getSize()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"size : "<<q.getSize()<<"\n";
}