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
    ~LinkedList()
    {
        delete head;
    }

    Node *CreateNewNode(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
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
                cout << value << " is found at index : " << index << "\n";
            }
            node = node->next;
            index++;
        }
    }

    void insertAtAnyIndex(int index, int value)
    {
        if (index == 0)
        {
            insertAtHead(value);
            return;
        }

        Node *a = head;
        int curr_index = 0;
        while (curr_index != index - 1)
        {
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
            return;
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
        // sizeof linkedlist = O(n)
        /*
        Node *node = head;
        // int size = 0;
        while(node!=NULL){
            size++;
            node = node->next;
        }
        return size;
        */
    }
};

int main()
{
    LinkedList l;
    l.insertAtHead(25);
    // l.traverse();
    l.insertAtHead(35);
    // l.traverse();
    l.insertAtHead(45);
    // l.traverse();
    l.insertAtHead(55);
    // l.traverse();
    l.insertAtHead(65);
    // l.traverse();
    l.insertAtHead(75);
    l.traverse();

    cout << l.searchDistinctValue(65) << "\n";

    l.searchAllValue(35);

    l.insertAtAnyIndex(2, 68);
    l.traverse();

    cout << l.getSize() << "\n";

    l.deleteAtHead();
    l.traverse();
    cout << l.getSize() << "\n";

    l.deleteAtAnyIndex(4);
    l.traverse();
    cout << l.getSize() << "\n";
}