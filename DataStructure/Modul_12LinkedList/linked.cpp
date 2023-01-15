#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    Node *CreateNewNode(int value)
    {
        Node *node = new Node;
        node->data = value;
        node->next = NULL;
        return node;
    }

    void insertAtHead(int value)
    {
        size++;
        Node *node = CreateNewNode(value);
        if (head == NULL)
        {
            head = node;
            return;
        }

        node->next = head;
        head = node;
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

    int searchDistinctValue(int value)
    {
        Node *node = head;
        int index = 0;
        while (node != NULL)
        {
            if (node->data == value)
            {
                return index;
            }
            node = node->next;
            index++;
        }
        return -1;
    }

    void searchAllValue(int value)
    {
        Node *node = head;
        int index = 0;
        while (node != NULL)
        {
            if (node->data == value)
            {
                cout << value << " is position index : " << index;
            }
            node = node->next;
            index++;
        }
        cout<<"\n";
    }

    void insertAtAnyIndex(int index, int value){
        if(index==0){
            insertAtHead(value);
            return;
        }

        Node *a = head;
        int curr_index = 0;
        while(curr_index != index - 1){
            a = a->next;
            curr_index++;
        }
        size++;
        Node *newNode = CreateNewNode(value);
        newNode->next = a->next;
        a->next = newNode;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        size--;
        Node *node = head;
        head = node->next;
        delete node;
    }

    void deleteAtAnyIndex(int index)
    {
        if (index < 0 || index > size - 1)
        {
            return;
        }
        if (index == 0)
        {
            deleteAtHead();
        }

        size--;
        Node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->next;
            cur_index++;
        }

        Node *b = a->next;
        a->next = b->next;
        delete b;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    LinkedList l;
    l.insertAtHead(45);
    l.insertAtHead(55);
    l.insertAtHead(65);
    l.insertAtHead(45);
    l.insertAtHead(75);
    l.insertAtHead(85);
    l.insertAtHead(95);

    l.traverse();
    cout<<l.searchDistinctValue(75)<<"\n";
    cout<<l.getSize()<<"\n";
    l.searchAllValue(55);
    l.insertAtAnyIndex(5,75);
    l.traverse();
    cout<<l.getSize()<<"\n";

    l.deleteAtHead();
    l.traverse();

    l.deleteAtAnyIndex(3);
    l.traverse();
    cout<<l.getSize()<<"\n";
}