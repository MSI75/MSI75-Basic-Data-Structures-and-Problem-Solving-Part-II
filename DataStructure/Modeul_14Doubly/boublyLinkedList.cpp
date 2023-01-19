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

public:
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

        Node *a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
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

        Node *a = head;

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

    // void deleteAtHead()
    // {
    //     if (head == NULL)
    //     {
    //         return;
    //     }
    //     Node *node = head;
    //     head = node->next;
    //     size--;
    //     delete node;
    // }

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

        Node *a = head;
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

    void reverse()
    {
        if (head == NULL)
        {
            return;
        }

        Node *a = head;
        int curr_index = 0;
        while (curr_index != size - 1)
        {
            a = a->next;
            curr_index++;
        }

        Node *b = head;
        while (b != NULL)
        {
            swap(b->next, b->prev);
            b = b->prev;
        }
        head = a;
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

int main()
{
    DoublyLinkedList l;
    l.insertAtHead(75);
    l.insertAtHead(36);
    l.insertAtHead(25);
    l.insertAtHead(79);
    l.traverse();

    // l.insertAnyValue(2, 100);
    // // l.deleteAtHead();
    // l.deleteAnyValue(4);
    // l.traverse();
    // l.reverse();
    // l.traverse();

    l.reverse();
    l.traverse();
    cout << l.getSize() << "\n";
}