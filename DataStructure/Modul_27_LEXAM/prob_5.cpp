#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
    public:
    T data;
    Node *next;
    Node *prev;
};

template<class T>
class Deque{
    Node<T> *head;
    Node<T> *tail;
    int sz;
    Node<T> *createNewNode(T value){
        Node<T> *node = new Node<T>;
        node->data = value;
        node->prev = NULL;
        node->next = NULL;
        return node;
    }

    void inseartAtHead(T value){
        Node<T> *newNode = createNewNode(value);
        if(sz==0){
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

    void inseartAtTail(T value){
        Node<T> *newNode = createNewNode(value);
        if(sz==0){
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

    void DeleteAtHead(){
        if(sz==0){
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz==1){
            delete head;
            head=NULL;
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

    void DeleteAtTail(){
        if(sz==0){
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz==1){
            delete head;
            head=NULL;
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
    Deque(){
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push_front(T value){
        inseartAtHead(value);
    }

    void push_back(T value){
        inseartAtTail(value);
    }

    void pop_back(){
        DeleteAtTail();
    }

    void pop_front(){
        DeleteAtHead();
    }

    T front(){
        if(sz==0){
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }

    T back(){
        if(sz==0){
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return tail->data;
    }
};

int main(){
    Deque<int>d;
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    cout<<"Front : "<<d.front()<<"   "<<"Back : "<<d.back()<<"\n";

    d.push_front(8);
    d.push_front(9);
    d.push_back(10);

    cout<<"Front : "<<d.front()<<"   "<<"Back : "<<d.back()<<"\n";

    d.pop_back();
    d.pop_back();
    d.pop_front();
    d.pop_front();
    cout<<"Front : "<<d.front()<<"   "<<"Back : "<<d.back()<<"\n";

}
