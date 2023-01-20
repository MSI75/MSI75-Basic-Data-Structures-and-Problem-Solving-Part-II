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

    Node *CreateNewNode(int data)
    {
        Node *node = new Node;
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
        return node;
    }

public:
    DoublyLinkedList()
    {
        this->head = NULL;
        this->size = 0;
    }

    ~DoublyLinkedList()
    {
        delete this->head;
    }

    void insertAtHead(int data)
    {
        size++;
        Node *newNode = CreateNewNode(data);
        while (this->head == NULL)
        {
            head = newNode;
            return;
        }
        Node *a = this->head;
        newNode->next = a;
        a->prev = newNode;
        this->head = newNode;
    }

    void insertAnyIndex(int index, int value)
    {
        if (index < 0 || index > size - 1)
        {
            return;
        }

        Node *a = this->head;
        int curr_index = 0;
        while (curr_index != index - 1)
        {
            a = a->next;
            curr_index++;
        }

        Node *newNode = CreateNewNode(value);
        newNode->next = a->next;
        a->next = newNode;
        newNode->prev = a;
        newNode = a->next->next;
    }

    void lastNodeRemove()
    {
        if (this->head == NULL)
        {
            return;
        }
        Node *a = this->head;
        while (a->next->next != NULL)
        {
            a = a->next;
        }
        Node *b = a->prev;
        a->next = NULL;
        size--;
        delete b;
    }

    void deleteAnyValue(int value)
    {
        if (this->head == NULL)
        {
            return;
        }

        Node *a = this->head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }
            a = a->next;
        }

        Node *b = a->prev;
        Node *c = a->next;

        if (b != NULL)
            b->next = c;
        if (c != NULL)
            c->prev = b;
        if (a->data == 0)
        {
            this->head = c;
        }
        size--;
        delete a;
    }

    void searchAtIndex(int index)
    {
        if (index < 0 || index > size - 1)
        {
            return;
        }

        Node *a = this->head;
        int curr_index = 0;
        while (a->next != NULL)
        {
            if (curr_index == index)
            {
                cout << a->data << "\n";
                return;
            }
            a = a->next;
            curr_index++;
        }
    }

    void searchingValue(int value)
    {
        if (this->head == NULL)
        {
            return;
        }
        Node *a = this->head;

        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << "True\n";
            }
            a = a->next;
        }
    }

    void reverse()
    {
        if (this->head == NULL)
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
        this->head = a;
    }

    void traverse()
    {
        Node *node = this->head;

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

    void palindrome()
    {
        if (this->head == NULL)
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
        this->head = a;

        Node *c = this->head;

        while (a != NULL && c != NULL)
        {
            if (c->data == a->data)
            {
                cout << "True\n";
            }
            else
            {
                cout << "False\n";
            }
            c = c->next;
            a = a->next;
        }
    }

int is_palindrom(){
    int flag = 1;
    if(this->head==NULL){
        flag = 0;
    }

    Node *a = this->head;
    while(a->next!=NULL){
        a = a->next;
    }

    Node *b = this->head;
    while(a!=b){
        if(a->data!=b->data){
            flag = 0;
        }
        b=b->next;
        a=a->prev;
    }
    return flag;
}

};

int main()
{
    DoublyLinkedList dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtHead(3);
    dl.insertAtHead(2);
    dl.insertAtHead(1);
    // dl.insertAtHead(0);

    // dl.lastNodeRemove();

    //   dl.searchingValue(5);
    // dl.insertAnyIndex(2,45);
    // dl.deleteAnyValue(5);
    // dl.palindrome();
    int ans = dl.is_palindrom();
    if(ans){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }
    dl.traverse();
    // dl.reverse();
    // dl.traverse();
    //  dl.searchAtIndex(3);
    cout << dl.getSize() << "\n";
}