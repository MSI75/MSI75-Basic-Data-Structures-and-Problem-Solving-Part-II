#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int index;
    int data;
    Node *next = NULL;
};
class LinkList
{
private:
    int index;
    Node *head;
    void reverse_traverse(Node *head)
    {
        if (head == NULL)
        {
            return;
        }
        reverse_traverse(head->next);
        cout << head->data << " ";
    }

public:
    LinkList()
    {
        this->index = -1;
        this->head = NULL;
    }
    ~LinkList()
    {
        delete head;
    }

    Node *CreateNewNode(int value)
    {
        Node *node = new Node;
        node->index = ++this->index;
        node->data = value;
        node->next = NULL;
        return node;
    }

    void InsertAtHead(int value)
    {
        Node *node = CreateNewNode(value);

        if (head == NULL)
        {
            head = node;
            return;
        }

        node->next = head;
        head = node;
    }
    int getSize()
    {
        return this->index + 1;
    };
    void printReverse()
    {
        this->reverse_traverse(this->head);
        cout << "\n";
    };
    int getValue(int index)
    {
        if (index > this->index + 1 || index < 0)
        {
            return -1;
        }
        Node *temp = head;
        while (temp)
        {
            if (temp->index == index)
            {
                return temp->data;
            }
            temp = temp->next;
        }
        return -1;
    };
    void Traverse()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    };
    void swapFirst()
    {
        if (this->index + 1 < 2)
        {
            return;
        }
        Node *temp1 = head->next->next;
        Node *temp2 = head->next;
        Node *temp3 = head;
        temp3->next = temp1;
        temp2->next = temp3;
        head = temp2;
    };
};

int main()
{
    LinkList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}