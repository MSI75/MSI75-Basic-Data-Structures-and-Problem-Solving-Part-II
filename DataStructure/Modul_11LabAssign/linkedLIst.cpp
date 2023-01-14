#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    public:
    int size;
    Node *head;
    LinkedList(){
        head = NULL;
        size = 0;
    }

    Node *CreateNewNode(int value){
        Node *node = new Node;
        node->data = value;
        node->next = NULL;
        size++;
        return node;
    }

    void InsertAtHead(int value){
        Node *node = CreateNewNode(value);

        if(head==NULL){
            head = node;
            return;
        }

        node->next = head;
        head = node;
    }

    void Traverse(){
        Node* node = head;

        while(node!=NULL){
            cout<<node->data<<" ";
            node = node->next;
        }
        cout<<"\n";
    }

    int getSize(){
        return size;
    }

    int getValue(int index){
        if(size<=index){
            return - 1;
        }

        Node *current = head;
        int count = 0;
        while(count<index){
            current=current->next;
            count++;
        }
        return current->data;
    }

    void printReverse(){
        Node *node = head;

        if(node==NULL) return;
        node = node->next;
        
        printReverse();
      
        cout<<node->data<<" ";
    }

    

};

int main(){
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(0)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    // l.swapFirst();
    l.Traverse();
    l.printReverse();

}