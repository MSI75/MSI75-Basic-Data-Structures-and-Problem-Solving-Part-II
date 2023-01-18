#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    int *next;
    int *prev;
};

class DoublyLinkdedList
{
    Node *head;
    int size;

    Node *CreateNewNode(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

public:
    DoublyLinkdedList()
    {
        this->head = NULL;
        size = 0;
    }

    ~DoublyLinkdedList()
    {
        delete head;
    }

    void insertAtHead(int data){
        Node *newNode = CreateNewNode(data); 

        if(head==NULL){
            newNode = head;
            return;
        }

        Node *a = head;
        newNode->next  = a;
        a->prev = newNode;
        head = newNode;

    }
};