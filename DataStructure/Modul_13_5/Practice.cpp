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
    Node *head;
    int size;
    Node *sortedLinkedList;
    Node *test;

    void sortInsertion(Node *node){
        if(this->sortedLinkedList == NULL){
            this->sortedLinkedList = node;
        }else if(this->sortedLinkedList->data >= node->data){
            node->next = sortedLinkedList;
            sortedLinkedList = node;
        }else{
            Node *temp = this->sortedLinkedList;
            while(temp->next != NULL){
                if(temp->next->data > node->data){
                    break;
                }
                temp = temp->next;
            }
            node->next = temp->next;
            temp->next = node;
        }
    }

public:
    LinkedList()
    {
        head = NULL;
        this->sortedLinkedList = NULL;
        size = 0;
    }
    ~LinkedList(){
        delete head;
        delete test;
        delete sortedLinkedList;
    }

    Node *CreateNewValue(int value)
    {
        test = head;
        Node *node = new Node;
        node->data = value;
        node->next = NULL;
        size++;
        return node;
    }

    void insertAtHead(int value)
    {
        Node *node = CreateNewValue(value);

        if (head == NULL)
        {
            head = node;
            return;
        }
        size++;
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

    void insertAnyindex(int index, int value)
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
        Node *newNode = CreateNewValue(value);
        newNode->next = a->next;
        a->next = newNode;
    }

    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        size--;
        Node *node = head;
        head = node->next;
        delete node;
    }

    void deleteAnyValue(int index){
        if(index<0 || index>size-1)
        return;
        if(index==0){
            deleteAtHead();
            return;
        }

        Node  *a = head;
        int curr_index = 0;

        while(curr_index != index - 1){
            a = a->next;
            curr_index++;
        }

        size--;
        Node *node = a->next;
        a->next = node->next;
        delete node;
    }

    int searchAllValue(int index){
     
        Node *node = head;

        int curr_index = 0;

        while(node!=NULL){
            if(curr_index==index){
                return node->data;
            }
            curr_index++;
            node = node->next;
        }
        return -1;
    }

    bool searchValue(int value){
        Node *node = head;

        while (node!=NULL)
        {
            if(node->data==value)
            {
                return true;
            }
            node = node->next;
        }
        return false;
    }

    void sortLinkedList(){
       Node *current = this->head;
       this->sortedLinkedList = NULL;
       while(current != NULL){
            Node *t = current->next;
            current->next = NULL;
            this->sortInsertion(current);
            current = t;
       }
       this->head = this->sortedLinkedList;
    }
   
};

int main()
{
    LinkedList l;
    l.insertAtHead(5);
    l.insertAtHead(10);
    l.insertAtHead(3);
    l.insertAtHead(7);
    l.insertAtHead(1);
    l.traverse();
    l.sortLinkedList();
    l.traverse();

    // l.insertAnyindex(0, 0);
    // // l.deleteAtHead();
    // l.traverse();

    // // l.deleteAnyValue(5);
    // l.traverse();

    // cout<<l.searchAllValue(2)<<"\n";
  

    return 0;
}